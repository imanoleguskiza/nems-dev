# NextEuropa Subsite Starterkit

```
T                                    \`.    T
|    T     .--------------.___________) \   |    T
!    |     |//////////////|___________[ ]   !  T |
     !     `--------------'           ) (      | !
                                      '-'      !
```

This is a starting point for creating new websites for the [NextEuropa
platform](https://blogs.ec.europa.eu/eu-digital/content/next-europa-it-platform)
of the European Commission.


## Features

- Support for NextEuropa 2.1.0 and later.
- Easily test your code on the latest development branch of the NextEuropa
  platform to validate if your site will work on the next release.
- Integrated support for Behat and PHP CodeSniffer.
- Built-in support for Continuous Integration using ContinuousPHP.
- Build your website in an automated way to get your entire team up and running
  fast!


## Repository structure

### 1. Project configuration

The configuration of the project is managed in 3 `build.properties` files:

1.  `build.properties.dist`: This contains default configuration which is
    common for all NextEuropa projects. *This file should never be edited.*
2.  `build.properties`: This is the configuration for your project. In here you
    can override the default configuration with settings that are more suitable
    for your project. Some typical settings would be the site name, the install
    profile to use and the modules/features to enable after installation.
3.  `build.properties.local`: This contains configuration which is unique for
    the local development environment. In here you would place things like your
    database credentials and the development modules you would like to install.
    *This file should never be committed.*

### 2. Project code

* Your custom modules, themes and custom PHP code go in the `lib/` folder. The
  contents of this folder get symlinked into the Drupal website at `sites/all/`.
* Any contrib modules, themes, libraries and patches you use should be put in
  the make file `resources/site.make`. Whenever the site is built these will be
  downloaded and copied into the Drupal website.
* If you have any custom Composer dependencies, declare them in
  `resources/composer.json` and `resources/composer.lock`.

### 3. Drupal root

The Drupal site will be placed in the `platform/` folder when it is built. Point
your webserver here. This is also where you would execute your Drush commands.
Your custom modules are symlinked from `platform/sites/all/modules/custom/` to
`lib/modules/` so you can work in either location, whichever you find the most
comfortable.

### 4. Behat tests

All Behat related files are located in the `tests/` folder.

* `tests/behat.yml`: The Behat configuration file. This file is regenerated
  automatically when the project is built and should never be edited or
   committed.
* `tests/behat.yml.dist`: The template that is used for generating `behat.yml`.
  If you need to tweak the configuration of Behat then this is the place to do
  that.
* `tests/features/`: Put your Behat test scenarios here.
* `tests/src/Context/`: The home of custom Context classes.

### 5. Other files and folders

* `bin/`: Contains command line executables for the various tools we use such as
  Behat, Drush, Phing, PHP CodeSniffer etc.
* `src/`: Custom PHP code for the build system, such as project specific Phing
  tasks.
* `tmp/`: A temporary folder where the platform tarball is downloaded and
  unpacked during the build process.
* `tmp/deploy-package.tar.gz`: The platform tarball. This file is very large and
  will only be downloaded once. When a new build is started in the future the
  download will be skipped, unless this file is deleted manually.
* `vendor/`: Composer dependencies and autoloader.


## Getting started

This README is divided in different parts, please read the relevant section:

1. [Developer guide](#developer-guide): Explains day-to-day
   development practices when working on a NextEuropa subsite.
2. [Starting a new project](#starting-a-new-project): This
   section explains how to set up a brand new project on the NextEuropa
   platform. These instructions need only to be followed once by the lead
   developer at the start of the project.
3. [Converting an existing project](#converting-an-existing-project):
   If you already have a project that runs on NextEuropa and you want to start
   using Continuous Integration, check out this section.
4. [Merging upstream changes](#merging-upstream-changes): How to
   merge the latest changes that have been made to the Subsite Starterkit in
   your own project.
5. [Contributing](#contributing): How to contribute bugfixes and
   new features to the Subsite Starterkit.


## Developer guide

### 1. Download the project

First we obviously need to get hold of the project source code. For most
projects the "dev" version will be hosted on Github, but individual projects might be
hosted elsewhere. Your project manager will be able to inform you of the exact
location.

> Note that you will not be working directly on the Subsite Starterkit code base
> (aka `ec-europa/subsite-starterkit`), but on a project specific fork.

Let's assume our project is called `ec-europa/myproject` and is hosted on our
Github. We will be working on the "dev" version.

```
$ git clone git@github.com:ec-europa/myproject-dev.git
$ cd myproject-dev
```

### 2. Install dependencies

The software packages that are needed to build the project are installed with
[Composer](https://getcomposer.org/). See the documentation for Composer for
more information on how to install and use it.

```
$ composer install
```

### 3. Create a build.properties.local file

This file contains the configuration which is unique to your local environment,
i.e. your development machine. In here you specify your database credentials,
your base URL, the administrator password etc.

Some other things that can be useful is to provide a list of your favourite
development modules to enable, and whether you want to see verbose output of
drush commands and tests. Another good trick is that you can try out your
project against different versions of the Multisite / NextEuropa platform, for
example you might want to check out if your code still runs fine on the latest
development version by setting `platform.package.reference` to `develop`.

> Because these settings are personal they should not be shared with the rest of
> the team. *Make sure you never commit this file!*

Example `build.properties.local` file:

```
# Database settings.
drupal.db.name = my_project
drupal.db.user = root
drupal.db.password = hunter2

# Admin user.
drupal.admin.username = admin
drupal.admin.password = admin

# Development / testing modules to enable.
drupal.development.modules = devel field_ui maillog search_krumo simpletest views_ui

# The base URL to use in Behat tests.
behat.base_url = http://myproject.local/

# The location of the Composer executable.
composer.bin = /etc/bin/composer

# Verbosity of drush commands. Set to TRUE to be verbose.
drush.verbose = FALSE

# Verbosity of PHP Codesniffer. Set to 0 for standard output, 1 for progress
# report, 2 for debugging info.
phpcs.verbose = 2

# Set verbosity for Behat tests. 0 is completely silent, 1 is normal output, 2
# shows exception backtraces, 3 shows debugging information.
behat.options.verbosity = 3
```

### 4. Build your local development environment

Now that our configuration is ready, we can start downloading everything we need
to build our Drupal site.

```
$ ./bin/phing build-dev
```

This will:

* Download the latest validated version of the platform of the branch you
  specified.
* Build the project into the `platform/` subfolder.
* Symlink your custom modules and themes into the platform. This allows you to
  work inside the Drupal site, and still commit your files easily.

> Go get some coffee. The first time you build the site this can take a very
> long time. Future builds will be quicker since the platform will be cached and
> does not have to be downloaded every time.

### 5. Set up your webserver

The Drupal site will now be present in the `platform/` folder. Set up a
virtualhost in your favourite web server (Apache, Nginx, Lighttpd, ...) and
point its webroot to this folder.

If you intend to run Behat tests then you should put the base URL you assign to
your website in the `build.properies.local` file for the `behat.base_url`
property. See the example above.

### 6. Install the site

```
$ ./bin/phing install-dev
```

This will:

* Install the website with `drush site-install`.
* Enable the modules you specified in the `drupal.development.modules` property.

After a few minutes this process should complete and the website should be up
and running!

### 7. Run tests

Behat has been preconfigured in the `tests/` folder and an example test and
some example Contexts are supplied. Feel free to change them to your needs.
A symlink to the Behat executable is placed in the `tests/` folder for your
convenience.

```
$ cd tests/
$ ./behat
```

### 8. Check coding standards

PHP CodeSniffer is preconfigured with the latest Drupal coding standards
courtesy of the Coder module. A "git pre-push hook" is installed that will
automatically check the coding standards whenever you push your branch.  When
you are pushing new code to an existing branch only the changed files will be
checked to increase performance. When you push an entirely new branch a
complete check will be performed.

To manually check the coding standards you can run PHP CodeSniffer from the
root folder:

```
$ ./bin/phpcs
```

In many cases PHP CodeSniffer can fix the found violations automatically. To do
this, execute the following command from the root folder:

```
$ ./bin/phpcbf
```

If you need to tweak the coding standards (for example because you have created
a Views plugin which has class names that do not strictly respect the coding
standards) then you can put your additional rules in the `phpcs-ruleset.xml`
file. Please refer to the documentation of PHP CodeSniffer on how to configure
the rules.


## Starting a new project

Your new project will be based on the Subsite Starterkit but will live in its
own repository on GitHub. We are in fact using two repositories: 'dev' and
'reference':

- _'dev'_ repository: This is the repository where the development is done. On
  request we can give access to other developers (within the EC or external
  contractors) to this repository so that code can be shared effectively. This
  repository has 'master' and 'develop' branches as well as feature branches
  where the actual development is taking place. The 'master' branch will contain
  the latest code that is deployed on production.
- _'reference'_ repository: This is the 'official' repository which is used as a
  source for building the sites that are deployed on production. This is guarded
  by the internal QA team who will validate all pull requests and only allow the
  code to be merged in if it meets our quality guidelines. The official
  reference repositories are hosted on the internal git repository of the
  European Commission at https://webgate.ec.europa.eu/CITnet/stash/projects and
  these are mirrored on GitHub for convenience.

### 1. Create a new repository on GitHub

1. Log in to GitHub.
2. Go to https://github.com/ec-europa and click on "New repository" to create
   your repository. If you do not have access to this then please ask your
   project manager to create a team for you.
3. Choose a repository name for your project, making sure it ends in '-dev'.
   For example if you are creating a website for the European Department for
   the Promotion of Interoperable Agricultural Research and Development a
   good name for your repository would be `edpiard-dev`.
4. Decide whether you repository will be private or public. We encourage
   developers to make their code public, but you will need to consult your
   client and ask if they agree with it. If the code is public, take care not
   to commit any sensitive data such as e-mail addresses, API keys or
   passwords.
5. Don't add a README or any other files, just leave it empty.
6. Click "Create repository".
7. On the next page you will see the URL of your repository, which will look
   similar to this: `git@github.com:ec-europa/myproject-dev.git`. We will need
   this in the next step.

### 2. Fork the starterkit

Make a fork of the Subsite Starterkit by downloading it and then pushing it to
your own project's repository. Let's assume we are going to push to a
repository called 'myproject-dev'.

```
# Download the Subsite Starterkit.
$ git clone https://github.com/ec-europa/subsite-starterkit.git
$ cd subsite-starterkit

# Remove the 'origin' remote, and replace it with the one from our project repo.
$ git remote rm origin
$ git remote add origin git@github.com:ec-europa/myproject-dev.git

# Test the connection with the project repository.
$ git fetch origin

# Push our initial code base to the project repository.
$ git push origin master
```

### 3. Create a build.properties file

Create a new file called `build.properties` in the root folder and put
properties in it that are unique to your project. You can copy any of the
properties of the `build.properties.dist` file to override them and then commit
the file. The settings will then take effect for all developers that work on the
project.

Some typical project specific settings are the site name, the install profile,
the modules to enable after installation, paths to ignore during coding
standards checks, the version of the platform to use etc.

Example file:

```
# The site name.
subsite.name = My Project

# The install profile to use.
drupal.profile.name = multisite_drupal_standard

# The branch, tag or commit to use, eg. 'master', 'develop', '1.7', '7df0d254b'.
# It is possible to use MySQL style wildcards here.
# Until version 2.1.0 of the platform is released, it is advised to use the
# 'develop' branch. After the 2.1.0 release you can best use 'master'.
platform.package.reference = develop

# Modules to enable after installation. Separate multiple modules with spaces.
# This will typically be the 'mother feature' which will contain all your other
# features and modules as dependencies.
subsite.install.modules = myproject_core
```

### 4. Commit and push

Now finally commit your configuration file and push it to your repository. Your
project is now ready to use.

```
$ git add build.properties
$ git commit -m "Add project specific build properties."
$ git push
```


## Converting an existing project

If you already have an existing project and want to convert it to the Subsite
Starterkit methodology then please follow these guidelines.

> Note that only NextEuropa 2.1.0 or higher is supported. If your project is on
> version 1.7.x or 2.0.x you will need to update to 2.1.x first.

### 1. Create a working branch

To avoid any unintentional damage to the existing code base it is advised to
work in a temporary working branch.

```
$ git checkout -b convert-to-sssk
```

### 2. Get the code

We'll add the Subsite Starterkit repository as a remote called 'starterkit', and
merge its code.

```
$ git remote add starterkit https://github.com/ec-europa/subsite-starterkit.git
$ git fetch starterkit
$ git merge starterkit/master
```

Note that you might have to solve merge conflicts, especially if you are already
using Composer or Phing.

### 3. Create a build.properties file

Create a new file called `build.properties` in the root folder and put
properties in it that are unique to your project. You can copy any of the
properties of the `build.properties.dist` file to override them and then commit
the file. The settings will then take effect for all developers that work on the
project.

Some typical project specific settings are the site name, the install profile,
the modules to enable after installation, paths to ignore during coding
standards checks, the version of the platform to use etc.

Example file:

```
# The site name.
subsite.name = My Project

# The install profile to use.
drupal.profile.name = multisite_drupal_standard

# Modules to enable after installation. Separate multiple modules with spaces.
subsite.install.modules = myproject_super_feature

# The branch, tag or commit to use, eg. 'master', 'develop', '1.7', '7df0d254b'.
# It is possible to use MySQL style wildcards here.
# Until version 2.1.0 of the platform is released, it is advised to use the
# 'develop' branch. After the 2.1.0 release you can best use 'master'.
platform.package.reference = develop
```

### Update directory structure

Next you'll need to adapt your directory structure to the one used by the
starterkit. Note that most of these paths can be adapted to your liking by
finding the relevant properties in `build.properties.dist`, copying them to
`build.properties` and changing their values.

* Custom modules, themes and PHP code go in the `lib/` folder.
* The make file should be moved to `resources/site.make`.
* Your Behat tests go in the `tests/` folder. The starterkit uses a template
  file `tests/behat.yml.dist` to generate the Behat configuration so you might
  want to look into this to port your project specific Behat settings.
* If you have custom PHP CodeSniffer rules, put them in `phpcs-ruleset.xml`.

Finally commit your changes and test the build:

```
$ composer install
$ ./bin/phing build-dev
$ ./bin/phing install-dev
```


## Merging upstream changes

```
$ git remote add upstream https://github.com/ec-europa/subsite-starterkit.git
$ git fetch upstream
$ git merge upstream/master
```

You might need to fix merge conflicts as usual.


## Contributing

If you want to contribute some useful bug fixes and feature requests to the
Subsite Starterkit, please go through the normal channels and create a ticket
in Jira with your proposal in the NextEuropa project. Your request will be
handled in the regular sprints.

> Do not create pull requests in the Github repository, these are not monitored.

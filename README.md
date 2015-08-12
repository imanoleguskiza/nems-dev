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
    CITnet username and password, your database settings and the development
    modules you would like to install. *This file should never be committed.*

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

1. [Developing guide](#develop): Explains regular development practices for a
   NextEuropa subsite.
2. [Starting a new project](#start): This section explains how to set up a
   brand new project on the NextEuropa platform. These instructions need only
   to be followed once by the lead developer of the project.
3. [Converting an existing project](#convert): If you already have a project
   that runs on NextEuropa and you want to start using Continuous Integration,
   check out this section.
4. [Merging upstream changes](#merge): How to merge the latest changes that
   have been made to the Subsite Starterkit in your own project.


## <a name="#start"></a>Starting a new project

### 1. Fork the starterkit

Your new project will be based on the Subsite Starterkit but will live in its
own repository (on Stash, Bitbucket, GitHub or another provider of your choice).

Start by downloading the Subsite Starterkit, and then push it to your own
project's repository. Let's assume we are going to push to a repository called
'myproject-dev' in the CITnet Stash repository of the European Commission. If
your repository is hosted elsewhere, just replace the URL.

```
# Download the Subsite Starterkit.
$ git clone https://bitbucket.org/digitfpfis/subsite-starterkit.git
$ cd subsite-starterkit

# Remove the 'origin' remote, and replace it with the one from our project repo.
$ git remote rm origin
$ git remote add origin https://myuser@webgate.ec.europa.eu/CITnet/stash/scm/multisite/myproject-dev.git

# Test the connection with the project repository.
$ git fetch origin

# Push our initial code base to the project repository.
$ git push origin master
```

### 2. Install dependencies

The software packages that are needed to build the project are installed with
[Composer](https://getcomposer.org/). See the documentation for Composer for
more information on how to install and use it.

```
$ composer install
```

### 3. Configure build properties


#### a) Create a build.properties file

To do this, create a new file called `build.properties` in the root folder and
put properties in it that are unique to your project. You can copy any of the
properties of the `build.properties.dist` file to override them and then commit
the file. The settings will then take effect for all developers that work on
the project.

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

#### b) Create a build.properties.local file

This file contains the configuration which is unique to your local environment,
i.e. your development machine. In here you specify your database credentials,
your base URL, the administrator password etc.
Some other things that can be useful is to provide a list of your favourite
development modules to enable, and whether you want to see verbose output of
drush commands and tests. Another good trick is that you can try out your
project against different versions of the Multisite / NextEuropa platform, for
example you might want to check out if your code still runs fine on the latest
development version by setting `platform.package.reference` to `develop`:

Because these settings are personal they should not be shared with the rest of
the team. Make sure you never commit this file!

Example:

```
# Database settings.
drupal.db.name = my_database
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

```
$ ./bin/phing build-dev
```

This will:

* Download the latest validated version of the platform of the branch you
  specified.
* Build the project into the `platform/` subfolder. Set up this folder as your
  webroot.
* Symlink your custom modules and themes into the platform. This allows you to
  work inside the Drupal site, and still commit your files easily.

### 5. Install the site

```
$ ./bin/phing install-dev
```

### 6. Run tests

Behat has been preconfigured in the `tests/` folder and an example test and
some example Contexts are supplied. Feel free to change them to your needs.
A symlink to the Behat executable is placed in the `tests/` folder for your
convenience.

```
$ cd tests/
$ ./behat
```

### 7. Check coding standards

PHP CodeSniffer is preconfigured with the latest Drupal coding standards
courtesy of the Coder module. You can run the coding standards checks from the
root folder:

```
$ ./bin/phpcs
```

If you need to tweak the coding standards (for example because you have created
a Views plugin which has class names that do not strictly respect the coding
standards) then you can put your additional rules in the `phpcs-ruleset.xml`
file. Please refer to the documentation of PHP CodeSniffer on how to configure
the rules.

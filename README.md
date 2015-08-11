# Subsite Starterkit

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


## Starting a new project

### 1. Download the starterkit

```
$ git clone git@bitbucket.org:digitfpfis/subsite-starterkit.git
$ cd subsite-starterkit
```

### 2. Install dependencies

The software packages that are needed to build the project are installed with
[Composer](https://getcomposer.org/). See the documentation for composer on how
to install and use it.

```
$ composer install
```

### 3. Configure build properties

The configuration of the project is managed in 3 `build.properties` files:

1.  `build.properties.dist`: This contains default configuration which is
    common for all NextEuropa projects. This file should never be edited.
2.  `build.properties`: This is the configuration for your project. In here you
    can override the default configuration with settings that are more suitable
    for your project. Some typical settings would be the site name, the install
    profile to use and the modules/features to enable after installation.
3.  `build.properties.local`: This contains configuration which is unique for
    the local development environment. In here you would place things like your
    CITnet username and password, your database settings and the development
    modules you would like to install. This file should never be committed.

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
drupal.profile.name = multisite_drupal_communities

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

# The branch, tag or commit to use, eg. 'master', 'develop', '1.7', '7df0d254b'.
platform.package.reference = develop

# The base URL to use in Behat tests.
behat.base_url = http://myproject.local/

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
$ ./bin/phing build-dev
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

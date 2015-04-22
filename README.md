# Subsite Starterkit

       T                                    \`.    T
       |    T     .--------------.___________) \   |    T
       !    |     |//////////////|___________[ ]   !  T |
            !     `--------------'           ) (      | !
                                             '-'      !

This is a starting point for creating new websites for the
[NextEuropa platform](https://blogs.ec.europa.eu/eu-digital/content/next-europa-it-platform)
of the European Commission.


## Starting a new project

### 1. Download the starterkit

```
$ git clone git@bitbucket.org:digitfpfis/subsite-starterkit.git
```

### 2. Install dependencies

The software packages that are needed to build the project are installed with
[Composer](https://getcomposer.org/).

```
$ cd subsite-starterkit
$ composer install
```

### 3. Configure build properties

You can configure your project using `build.properties` files:

1.  `build.properties.dist`: This contains default configuration which is
    common for all NextEuropa projects. This file should never be edited.
2.  `build.properties`: This is the configuration for your project. In here you
    can override the default configuration with settings that are more suitable
    for your project. Some typical settings would be the site name, the install
    profile to use and the admin password.
3.  `build.properties.local`: This contains configuration which is unique for
    the local development environment. In here you would place things like your
    CITnet username and password, your database settings and the development
    modules you would like to install. This file should never be committed.

#### a) Create a build.properties file

To do this, create a new file called `build.properties` in the root folder and
put properties in it that are unique to your project. You can copy any of the
properties of the `build.properties.dist` file to override them. For example:

```
# The install profile to use.
drupal.profile.name = multisite_drupal_communities

# The name of the subsite.
subsite.name = My Project
```

#### b) Create a build.properties.local file

This file will contain the configuration which are unique to your development
machine. You can specify your favourite development modules, your database and
CITnet credentials and so on. Another good trick is that you can try out your
project against different versions of the Multisite / NextEuropa platform, for
example you might want to check out if your code still runs fine on the latest
development version by setting `platform.repo.branch` to `devel`:

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
platform.repo.branch = develop

# Credentials used to access the repository on CITnet.
platform.repo.user = myusername
platform.repo.pass = mypassword
```

## Building your local development site:

```
$ ./bin/phing build-dev
```

### This will:

*   Check out the branch of MULTISITE set in the properties file from SVN.
*   Make the Drupal installation into the build folder based on the build.make file of the installation profile set in the properties file.

## To install your local dev site:

*   RUN: <code>bin/phing install</code>

## Re-build the environment:

*   RUN: <code>bin/phing rebuild-dev</code>

### This will:

*   Backup settings.php
*   Update the branch of MULTISITE set in the properties file from SVN.
*   Make the Drupal installation into the build folder based on the build.make file of the installation profile set in the properties file.
*   Restore settings.php

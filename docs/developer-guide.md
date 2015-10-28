## Developer guide

### 1. Download the project

First we obviously need to get hold of the project source code. For most
projects the "dev" version will be hosted on Github, but individual projects
might be hosted elsewhere. Your project manager will be able to inform you of
the exact location.

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

# Development / testing modules to download.
development.modules.download = coffee devel maillog

# Development / testing modules to enable.
drupal.development.modules = coffee devel field_ui maillog simpletest views_ui

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

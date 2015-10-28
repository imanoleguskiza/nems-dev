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
platform.profile.name = multisite_drupal_standard

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

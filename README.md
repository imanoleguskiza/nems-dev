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

The `build.properties.dist` file contains default configuration which is common
to all NextEuropa projects. You might want to override some of these properties
for your own project.

To do this, create a new file called `build.properties` in the root folder and
put your overrided properties in it:

```
$ vi build.properties
```


## To build your local dev site:

*   Create your build.properties.local from build.properties.dist
*   Change settings in build.properties.local to match your environment.
*   RUN: <code>bin/phing build-dev</code>

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

[![Build Status][travis_img]][travis] [![Build Status][appveyor_img]][appveyor]

[CProver Wiki](http://www.cprover.org/wiki)

About
=====

JBMC is a Bounded Model Checker for Java programs. It supports
checking for runtime exceptions and user-defined assertions.
The verification is performed by unwinding the loops in the program
and passing the resulting equation to a decision procedure.

Versions
========

Get the [latest release](https://github.com/diffblue/jbmc/releases)
* Releases are tested and for production use.

Get the current *develop* version: `git clone https://github.com/diffblue/jbmc.git`
* Develop versions are not recommended for production use.

Prerequisites
============

JBMC compiles CBMC as part of its build process and as such has all the pre-requisites of CBMC. These can be viewed at: [diffblue/cbmc:COMPILING](http://github.com/diffblue/cbmc/blob/master/COMPILING)

Compilation
===========

To compile you need to run two commands:

```bash
make -C src setup-cbmc
make -C src CXXFLAGS="-Wall -O2 -g -Werror -Wno-deprecated-register -pedantic -Wno-sign-compare"
```

The first make command will configure the CBMC submodule (found in lib/cbmc). It can optionally be provided with a list of users forks to retrieve. This is  needed if changes depend on a commit that has not yet been merged into
diffblue/cbmc.

For example, if you need userA and userB's forks the first command would be:

```bash
make -C src USERS="userA userB" setup-cbmc
```

It is recommend to add your fork in this way.

Output
======

Compiling produces an executable called symex which by default can be found in `src/jbmc/jbmc`

Report bugs
===========

If you encounter a problem please file a bug report:
* Create an [issue](https://github.com/diffblue/jbmc/issues)

Contributing to the code base
=============================

1. Fork the repository
2. Clone the repository `git clone git@github.com:YOURNAME/jbmc.git`
3. Create a branch from the `develop` branch (default branch)
4. Make your changes (follow the [coding guidelines](https://github.com/diffblue/cbmc/blob/develop/CODING_STANDARD.md))
5. Push your changes to your branch
6. Create a Pull Request targeting the `develop` branch

License
=======
4-clause BSD license, see `LICENSE` file.

[travis]: https://travis-ci.org/diffblue/jbmc
[travis_img]: https://travis-ci.org/diffblue/jbmc.svg?branch=develop
[appveyor]: https://ci.appveyor.com/project/diffblue/jbmc/
[appveyor_img]: https://ci.appveyor.com/api/projects/status/github/diffblue/jbmc?svg=true&branch=develop

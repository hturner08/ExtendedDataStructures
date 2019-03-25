![Build Status](https://travis-ci.org/hturner08/pystructures.svg?branch=master)
![License](https://img.shields.io/github/license/hturner08/pystructures.svg)

# ExtendedDataStructures
The goal of project is to aid developers in the use of data structures.

## Python Builtin Data Structures
The builtin data structures in Python: lists, tuples, dictionaries, strings, sets and frozensets.

Lists, strings and tuples are ordered sequences of objects. Unlike strings that contain only characters, list and tuples can contain any type of objects. Lists and tuples are like arrays. Tuples like strings are immutables. Lists are mutables so they can be extended or reduced at will. Sets are mutable unordered sequence of unique elements whereas frozensets are immutable sets.

## Pystructure Additions
This package will add several other important data structures to python, including the following:
* Arrays
* Stacks
* Queues
  * Double-ended Queues
  * Priority Queues
* Trees
* Heaps

## Usage
```
#import package
import pystructures
```

```
#or any of the submodules
from pystructures import pyobjects, cobjects
#You are now free to call objects
tree = new pyobjects.BinarySearchTree()

```
## Pull Request Steps
1. Fork the repository and then clone to a local repository.
2. Make changes on your local repository. If you wish to work with the cobjects folder, make sure you have the correct compiler installed. For Windows users, please dowload MinGW from http://www.mingw.org/. Mac OS users can install Apple Developer Tools which comes with the GNU Compiler Collection(You can run it using the gcc command in terminal).
3. Submit a pull request to my master branch. Try to keep up-to-date with the master branch to allow minimum merge conflicts. In the pull request, please include the following:
  * Purpose/main feature of your pull request
  * Badge confirming the successful Travis CI build
  * Any suggestions you have for people following up on your pull request

## Pull Request Suggestions
### * Finish implementing:
  * Red Black Tree
  * B Tree
### * Write unit tests
### * Run SWIG library on wrapping files to wrap C library
### * Any of the current issues

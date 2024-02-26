# Pattern Recognition
This repository contains the codes developed in the Pattern Recognition course of the Master's in Electrical Engineering at the University of Guanajuato.
Below is a list of the environment and the versions in which the codes were developed:

## Project Structure
Project directories:

- `main/`: Directory containing the source files `.cpp`.
- `images/`: Folder where the images used by the codes are stored.
- `Makefile`: Used to compile the codes.

## Prerequisites
The necessary programs to compile the programs with the versions that were used are listed:

**Operating System:** Ubuntu 20.04
**OpenCV:** 4.9.0-dev
**C++:** 9.4.0
**GNU Make:** 4.2.1

## Environment Configuration

Instructions for configuring the necessary environment to compile and run the project. For example, how to set the `BUILD` variable in `.bashrc` to facilitate compilation:
To be able to compile the programs using make, it is necessary to declare the **build** variable in bashrc:

echo "build() { make TARGET=\\\"$1\\\" }" >> ~/.bashrc
source ~/.bashrc

**Note:** If you are already using the "build" variable in your bashrc, replace it with another.

## Compilation Example

From the root directory, run:

build p01

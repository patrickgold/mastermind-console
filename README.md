# mastermind-console

This repository shows how the game MasterMind could look like in terminal/console.

## How to build this project

Currently the project is written in C and can be compiled both on Windows and Linux machines, but in near future it will also be present in other programming languages like C++, C# and of course Python.

### Compiling in Visual Studio 2017

Just copy all three files (mastermind.c, mastermind.h and main.c) in a VS Project and then run the code with hitting F5.

### Compiling and running MasterMind in Linux

On Linux machines we use the curses library. In order to compile MatserMind, make sure the curses library is installed:

```
sudo apt-get update && sudo apt-get install libncurses5-dev libncursesw5-dev
```

Make sure all files (mastermind.c, mastermind.h and main.c) are in one directory and compile it with gcc:

```
gcc -o mastermind mastermind.c main.c -Wall -lcurses
```

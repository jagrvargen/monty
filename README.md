# Stacks & Queues - Monty Byte Code
A memory stack in which a double linked list is created and managed to store integers.

## Installation
This program was written in **C** and compiled on `Ubuntu 14.04.3 LTS` with `gcc version 4.8.4`

**Clone repo**:
`$` [//]: <> (ADD IN THE URL FOR SUBMODULE!!!)




**Compile**
`$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

**Instructions**:
#### Execute Monty
`$ ./monty <filename>.m`

## Usage
Built-in functions:
* `push`
* `pall`
* `pint`
* `pop`
* `swap`
* `add`
* `nop`

## C Functions and Syscalls Utilized
```
exit (man 3 exit)
fclose (man 3 fclose)
fopen (man 3 fopen)
free (man 3 free)
getline (man 3 getline)
malloc (man 3 malloc)
printf (man 3 printf)
strtok (man 3 strtok)
strcmp (man 3 strcmp)
```

## File Descriptions
**README.md** - Description of the Monty program.

**monty.h** - Header file containing structs, global variable, and function prototypes.

**access__file.c** - File that reads the lines from the input file and passes those lines to the parse function..

**error__print** - Receives errors from function files and prints to output which errors were encountered.

**free__manager.c** - Frees all elements within the manager struct.

**funcs.c** - File holding various builtin functions for monty, such as: push, pall, pint, pop, swap.

**monty.c** - File that opens the input file and sends its contents to the access\_file function, and checks for errors if the file is not read or there are no arguments.

**more__funcs.c** - File holding more builtin functions for monty, such as add & nop.

**parse__line.c** - File that tokenizes each line in the input file and executes the first argument as a function, and the second argument as an integer.

## Authors
[Dimitrios Philliou] (https://github.com/DimitriCat)

[Jesse Hedden] (https://github.com/jagrvargen)

## License
Don't even think about it buddy.

# **simp** - simple_shell
A simple UNIX command interpreter, written as part of a low-level programming project for Holberton School.

# Description
This is a simple UNIX command language interpreter that reads commands from either a file or standard intput and executes them.

# Invocation
./simp
to invoke **simp**, you compile all your .c files in the repository with gcc and the flags "-Wall -Werror -Wextra -pedantic -std=gnu89"
and run the following executable:

**simp** can be invoked both interactively and non-interactively. If simp is invoked with standard input not connected to a terminal, it reads and 
executes recieved commands in that order.

Example:


# simp - Builtin commands

## ls
with the arguments -l -a -m -p etc.
list's in various formats.

## whereis
$ whereis "name of command"
prints path of whatever command typed.

## exit
$ exit
exits the shell.

## env
$ env
prints the environment.

# Authors
Chris Lind <>
Xavier Perez<>

# Misc
**simp** emulates basic functionality of the **sh** shell.

This project was written as a part of the curriculum for Holberton School. Holberton School is campus-based full-stack software engineering program that prepares students for careers in programming and the tech industy using project based peer learning methods. For more information, visit this link.

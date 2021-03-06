## Overview
io_basic.c is a code written in C that shows an example of passing a user-provided
	command line argument to a C code that contains only a main() function. The
	code stores two (2) values provided by the user as integers labeled 'x' and
	'y' within the code, then prints the values that were stored back to the
	terminal. An error and usage message is printed if the wrong number of
	arguments are provided. The io_basic_uncommented.c file is provided if the
	user desires a reference less cluttered by comments, but operates identically.

----------

Associated files:
- io_basic.c
- io_basic_uncommented.c
- README-io_basic

Compile with:
```
gcc io_basic.c -o io_basic
```
Run with:
```
./io_basic x y
```
   Where 'x' and 'y' are integer values

Exercises A - See how the code behaves when you:
1. Try passing a floating point value (decimal number) as one of your arguments
2. Try passing negative numbers
3. Try passing very large numbers
4. Try using exponential notation (e.g., 1.7e1 instead of 17)

Exercises B - 
1. Change the line 'int x, y;' to 'float x, y;' and run through the above  tests once more. Also try very small decimal numbers!
2. Change the same line to 'unsigned int x, y;' and run through the tests again. Can you pass a bigger positive value here than you could with regular int types?

Exercises C - Change the line back to 'int x, y;' then...
1. Do some small arithmetic operation with the numbers
2. Change the print statement to show what arithmetic you did and print the result

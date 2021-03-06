## Overview

basic_types.c is a code written in C that shows properties of the different basic
	variable types in C (mainly char, int, float, double). The code takes no
	inputs and prints to the screen several pre-defined tables indicating the
	maximum and minimum values which can be stored in each variable type as well
	as the precision of the different floating point values. The
	basic_types__uncommented.c file is provided if the user desires a reference
	less cluttered by comments, but operates identically.

--------------------------
Associated files:
* basic_types.c
* basic_types_uncommented.c
* README-basic_types

Compile with:
```
gcc basic_types.c -o basic_types
```

Run with:
```
./basic_types
```

Exercises A - Knowing that one byte is 8 bits in terms of computer memory, can you determine:
1. How the max unsigned 'char' value is defined?
2. How the max *signed* 'char value is defined?
HINT: think about powers of 2...

## Overview
basic_arithmetic-*.c are codes written in C that show simple arithmetic with ints and
	floats. The code stores two (2) values provided by the user labeled 'x' and
	'y' within the code, then prints the return values of various arithmetic
	operations using the user-provided values. An error and usage message is printed
	if the wrong number of arguments are provided. The basic_arithmetic-*_uncommented.c
	files are provided if the user desires a reference less cluttered by comments,
	but operates identically.


-----------

Associated files:
* basic_arithmetic-int.c
* basic_arithmetic-int_uncommented.c
* basic_arithmetic-float.c
* basic_arithmetic-float_uncommented.c
* README-arithmetic

Compile with:
```
gcc basic_arithmetic-int.c -o arith-int -lm
gcc basic_arithmetic-float.c -o arith-float -lm
```

Run with:
```
./arith-int x y
```
Where 'x' and 'y' are integer values
And:
```
./arith-float x y
```
Where 'x' and 'y' are floating point values

Exercises A - See how ./arith-int behaves when you:
1. Provide x < y (note division & modulo)
2. Provide x > y (again, note division & modulo)
3. Provide large values for x and y (note exponential)
4. Provide negative numbers
5. Provide floating point numbers
6. Provide 0 as one or both numbers

Exercises B - See how ./arith-float behaves when you:
1. Provide numbers in exponential notation (e.g. 1.7e1 instead of 17)
2. Provide VERY small numbers
3. Provide very large numbers 
4. Provide integer numbers (compare with ./arith-int)
5. Provide negative numbers
6. Provide 0 as one or both numbers
7. Try changing the line 'float x, y;' to 'double x, y;', recompile, and see if you can provide significantly larger/smaller numbers!

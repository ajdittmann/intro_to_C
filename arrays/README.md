## Overview
arrays*.c are codes written in C that show how to create simple 
1D and 2D arrays, and how to operate on them using functions

Associated files:
* arrays.c
* arrays_uncommented.c
* README-arrays

Compile with:
```
gcc arrays.c -o arrays -lm
```

Run with:
```
./arrays
```

Exercises A - See how ./arrays behaves when you:
1. Change Nx or Ny
2. Try to print out the values after malloc but before initializing the 1D array
3. change the math operations in set_values
4. In python, you can get the last index of an array by indexing with [-1]. What happens hear if you index a 1D array with [-1]? How does it compare with the value at [Nx-1]?

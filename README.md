# introduction to programming in C
Some examples and exercies, written by Joe DeMartini and Alex Dittmann

## Why you should learn C
Let's start with a little motivation, since C is almost 50 years old at this point
* sometimes people hand you C code to use
* C goes fast
* C is more trendy than FORTRAN
* C is the building block for other languages like C++ and CUDA
* You can use C to accelerate python code

In comparing C with other languages, I'll usually stick to python. Practically, you can just run a python script after writing it.
With C, after writing your code, it needs to be compiled before you can run it. 

The examples herein assume that you are familiar with using the command line, and have GCC (the GNU Compiler Collection) installed.
If you're on a mac, you can probably use clang, or just install GCC. GCC can also be installed on Windows, but it might be easier
to setup Windows Subsystem for Linux and get the ubuntu terminal environment from the Microsoft Store.

As far as going fast, some python vs. C benchmarks can be found [here](https://benchmarksgame-team.pages.debian.net/benchmarksgame/fastest/python3-gcc.html).
Those benchmarks are't quite fair, because there are tools like numpy which make math faster in python (under the hood, most 
numpy/scipy functions are written in C or FORTRAN). 

Some benchmarks comaring Python, numpy, and various flavors of [Cython](https://cython.org/) are listed [here](https://notes-on-cython.readthedocs.io/en/latest/std_dev.html)
Method | Time (ms) | Speedup vs Python
------------|-------------|--------------
Pure Python | 183 | x1
Numpy | 5.97 | x31
Naive Cython | 7.76 | x24
Optimized Cython | 2.18 | x84
Cython calling C | 2.22 | x82

Another way to go accelerate python is [numba](https://numba.readthedocs.io/en/stable/user/5minguide.html), but that's a topic for another day.

## Outline
1. intro - a basic 'hello world.'
2. io-basic - an introduction to printing and taking values as inputs from the command line.
3. basic_types - an overview of data types in C.
4. arithmetic - doing math in C, and the math library.
5. functions_basics - an introduction to functions.
6. functions_loops - for and while loops, along with if/else statements. And functions.
7. functions_arrays - using arrays and functions together.

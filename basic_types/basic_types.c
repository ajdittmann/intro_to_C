#include <stdio.h>	//For input/output - very important
#include <stdlib.h>	//Literally "standard libraries"
#include <limits.h>	//For the *_MIN and *_MAX global variables for ints
#include <float.h>	//For the floating point global variables

/*
** A code that prints out the storage size and min/max values for
** different types of integers in C. Takes no input. Output printed to screen.
*/

int main(void) {	//No inputs to main here. 'void' is (usually) a placeholder.

	/* Let's start with signed integers - negative and positive */
	printf("Signed Integers\n");
	printf("Type\tSize (bytes)\tMin Val\t\t\tMax Val\n");
	printf("'char'\t1\t\t%d\t\t\t%d\n", CHAR_MIN, CHAR_MAX);
	printf("'short'\t2\t\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
	printf("'int'\t4\t\t%d\t\t%d\n", INT_MIN, INT_MAX);
	printf("'long'\t8\t\t%ld\t%ld\n", (long) LONG_MIN, (long) LONG_MAX);
		//Note the different print option for long doubles: %ld vs %d

	/*
	** If we don't care about negative values, we can get larger positive ones!
	*/

	printf("\nUnsigned Integers\n");
	printf("Type\tSize (bytes)\tMin Val\t\t\tMax Val\n");
	printf("'uchar'\t 1\t\t0\t\t\t%d\n", UCHAR_MAX);
	printf("'ushort' 2\t\t0\t\t\t%d\n", (unsigned short) USHRT_MAX);
	printf("'uint'\t 4\t\t0\t\t\t%u\n", (unsigned int) UINT_MAX);
	printf("'ulong'\t 8\t\t0\t\t\t%lu\n", (unsigned long) ULONG_MAX);
		//%u and %lu for unsigned ints and unsigned long ints, respectively

	/*
	** If we need decimal values, we move to "floating point" numbers. Here
	** we also print the smallest decimal value for each type of "float" and
	** the number of digits of precision.
	*/

	printf("\nFloating Point Numbers (decimal numbers)\n");
	printf("Type\t\tSize (bytes)\tMin Val\t\tMax Val\t\tSmallest Decimal\tPrecision\n");
	printf("'float'\t\t4\t\t%g\t%g\t%g\t\t%d digits\n", (float) -FLT_MAX, (float) FLT_MAX,
							 (float) FLT_MIN, FLT_DIG);
	printf("'double'\t8\t\t%g\t%g\t%g\t\t%d digits\n", (double) -DBL_MAX, (double) DBL_MAX,
							 (double) DBL_MIN, DBL_DIG);
	printf("'long double'\t10\t\t%Lg\t%Lg\t%Lg\t\t%d digits\n", (long double) -LDBL_MAX,
				 (long double) LDBL_MAX, (long double) LDBL_MIN, LDBL_DIG);
		//%g is one of several print options for floats. Remember %Lg for long doubles!

	return 0;	//Because 'main' is an int, we have to return an int here!
	}

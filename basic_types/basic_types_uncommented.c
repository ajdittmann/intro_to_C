#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {

	printf("Signed Integers\n");
	printf("Type\tSize (bytes)\tMin Val\t\t\tMax Val\n");
	printf("'char'\t1\t\t%d\t\t\t%d\n", CHAR_MIN, CHAR_MAX);
	printf("'short'\t2\t\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
	printf("'int'\t4\t\t%d\t\t%d\n", INT_MIN, INT_MAX);
	printf("'long'\t8\t\t%ld\t%ld\n", (long) LONG_MIN, (long) LONG_MAX);

	printf("\nUnsigned Integers\n");
	printf("Type\tSize (bytes)\tMin Val\t\t\tMax Val\n");
	printf("'uchar'\t 1\t\t0\t\t\t%d\n", UCHAR_MAX);
	printf("'ushort' 2\t\t0\t\t\t%d\n", (unsigned short) USHRT_MAX);
	printf("'uint'\t 4\t\t0\t\t\t%u\n", (unsigned int) UINT_MAX);
	printf("'ulong'\t 8\t\t0\t\t\t%lu\n", (unsigned long) ULONG_MAX);

	printf("\nFloating Point Numbers (decimal numbers)\n");
	printf("Type\t\tSize (bytes)\tMin Val\t\tMax Val\t\tSmallest Decimal\tPrecision\n");
	printf("'float'\t\t4\t\t%g\t%g\t%g\t\t%d digits\n", (float) -FLT_MAX, (float) FLT_MAX,
							 (float) FLT_MIN, FLT_DIG);
	printf("'double'\t8\t\t%g\t%g\t%g\t\t%d digits\n", (double) -DBL_MAX, (double) DBL_MAX,
							 (double) DBL_MIN, DBL_DIG);
	printf("'long double'\t10\t\t%Lg\t%Lg\t%Lg\t\t%d digits\n", (long double) -LDBL_MAX,
				 (long double) LDBL_MAX, (long double) LDBL_MIN, LDBL_DIG);

	return 0;
	}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	int x, y;

	if (argc != 3) {
		printf("Wrong number of arguments!\n  Usage: %s x y\n", argv[0]);
		return 1;
		}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("User provided variables: x = %d, y = %d\n"
			"\tx + y = %d\n"
			"\tx - y = %d\n"
			"\tx * y = %d\n"
			"\tx / y = %d\n"
			"\tx %% y = %d\n"
			"\tx ^ y = %g\n"
			"\tsqrt(x) = %g\n"
			"\tsqrt(y) = %g\n",
			x, y, x+y, x-y, x*y, x/y, x % y, pow(x,y), sqrt(x), sqrt(y));

	return 0;
	}

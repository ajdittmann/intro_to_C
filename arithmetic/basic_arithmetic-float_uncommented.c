#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	float x, y;

	if (argc != 3) {
		printf("Wrong number of arguments!  Usage: %s x y\n", argv[0]);
		return 1;
		}

	x = atof(argv[1]);
	y = atof(argv[2]);

	printf("User provided variables: x = %g, y = %g\n"
			"\tx + y = %g\n"
			"\tx - y = %g\n"
			"\tx * y = %g\n"
			"\tx / y = %g\n"
			"\tx %% y = %g\n"
			"\tx ^ y = %g\n"
			"\tsqrt(x) = %g\n"
			"\tsqrt(y) = %g\n",
			x, y, x+y, x-y, x*y, x/y, fmod(x,y), pow(x,y), sqrt(x), sqrt(y));

	return 0;
	}

#include <stdio.h>	//Input/Output
#include <stdlib.h>	//Standard libraries
#include <math.h>	//For square roots, exponents, logs, etc.

int main(int argc, char *argv[]) {	// Arguments show we're taking command line args!

	float x, y;	// Can also try doubles here, if you want bigger numbers!

	/* Error trapping for wrong number of user inputs */
	if (argc != 3) {
		printf("Wrong number of arguments!  Usage: %s x y\n", argv[0]);
		return 1;
		}

	/* Now we convert to floats, rather than ints, using 'atof()' */
	x = atof(argv[1]);
	y = atof(argv[2]);

	/* Now let's do a bunch of math! */
	printf("User provided variables: x = %g, y = %g\n" // Notice the multi-line string literal!
			"\tx + y = %g\n"
			"\tx - y = %g\n"
			"\tx * y = %g\n"
			"\tx / y = %g\n"
			"\tx %% y = %g\n"	// Note how weird it is to print a '%' (modulo)
			"\tx ^ y = %g\n"	// pow() and sqrt() naturally return doubles!
			"\tsqrt(x) = %g\n"
			"\tsqrt(y) = %g\n",
			x, y, x+y, x-y, x*y, x/y, fmod(x,y), pow(x,y), sqrt(x), sqrt(y));
						// ^ Had to use the 'fmod()' function for floats!

	/* Note that we did all of the actual calculations at the end of the print function!
		This is a handy way to streamline your code when you won't otherwise use the
		results of the arithmetic! Useful for debugging!! */

	return 0;	// Gotta love that 'return 0;'
	}

/* Don't forget to compile with '-lm' */

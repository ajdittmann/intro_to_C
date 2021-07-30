#include <stdio.h>	//Input/Output
#include <stdlib.h>	//Standard libraries
#include <math.h>	//For square roots, exponents, logs, etc.

int main(int argc, char *argv[]) {

	int x, y;	// Define variables to store command line arguments

	/* Error trapping for wrong number of user inputs */
	if (argc != 3) {
		printf("Wrong number of arguments!\n  Usage: %s x y\n", argv[0]);
		return 1;	// Exits the code in the event of an error
		}

	/* Convert our inputs to integers so that we can do math with them! */
	x = atoi(argv[1]); // Remember, values in argv[] are *strings* by default
	y = atoi(argv[2]);

	/* Now let's do a bunch of math! */
	printf("User provided variables: x = %d, y = %d\n"
			"\tx + y = %d\n"
			"\tx - y = %d\n"
			"\tx * y = %d\n"
			"\tx / y = %d\n"	// Rounds unless they divide perfectly!
			"\tx %% y = %d\n"	// Modular arithmetic (remainder of division)
			"\tx ^ y = %g\n"	// pow() takes ints but doesn't always like it...
			"\tsqrt(x) = %g\n"	// sqrt() ONLY returns doubles
			"\tsqrt(y) = %g\n",
			x, y, x+y, x-y, x*y, x/y, x % y, pow(x,y), sqrt(x), sqrt(y));
	/* Note that we did all of the actual calculations at the end of the print function!
		This is a handy way to streamline your code when you don't need to store the
		results of the arithmetic! Useful for debugging!! */

	return 0;	// Mmmm tasty best practices.
	}

/* Don't forget to compile with '-lm' */

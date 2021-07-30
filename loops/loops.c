#include <stdio.h>	//Input/Output
#include <stdlib.h>	//Standard libraries
#include <math.h>	//For square roots, exponents, logs, etc.

#define N 10		//define a constant - this will be set in stone during compilation

int main(void) {

    double x = 1.0;
    double y = 1.5;
    int M = 200;

    printf(" starting 'for' loop\n");
	// a for loop. 'i' is a variable that is looped over, set to 0 initially. The loop will only run when i<N.
    // i++ is shorthand for: i = i + 1
	for (int i=0; i<N; i++) {
		x += i*y;	//multipy the value of x by i+1
		y += i;		//add i to y
        printf("magnitude of %e and %e is %.5e\n", x, y, sqrt(x*x + y*y));	//print the result of our custom calculation
	    }
    printf("\n starting 'while' loop\n");

    //An example while loop. It will keep running as long as the statement in paranetheses is true.
    printf("M = %d\n", M);	//see the current value of M
	while (M > 0) {
		M = M/2;			//divide M by 2. Note that this is dividing an integer by another integer.
        printf("M = %d\n", M);	//see the current value of M
	    }

    printf("\n starting 'while' loop with logical statements \n");
    M = 30;		//reset M to a larger value
    int counter = 0;	//an integer to keep track of how many times we have gone through the while loop
    printf("M = %d\n", M);	//see the current value of M
    while (M > 0) {
		if (counter % 3 == 0) M *= 2;
		else if (counter % 3 == 1) M /= counter;
		else M += 5;
		counter += 1;			//don't forget to incriment counter
	    printf("M = %d\n", M);	//see the current value of M
	    }


	return 0;	// Gotta love that 'return 0;
	}


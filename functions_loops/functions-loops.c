#include <stdio.h>	//Input/Output
#include <stdlib.h>	//Standard libraries
#include <math.h>	//For square roots, exponents, logs, etc.

int M = 200;		//declares and initializes a global variable
#define N 10		//define a constant - this will be set in stone during compilation


//define a function to get the magnitude of a 2D vector. You need to specify what type of value it will return.
double magnitude(double X, double Y) {		//need to specify the type of the function arguments
	return sqrt(X*X + Y*Y);
	}

//declare a function, but save defining it for later.
//This can be useful for long functions if you want 'main' to still be near the top of the file.
void changeM(int m);	//note the semicolon, unlike when we defined 'magnitude'

int main(void) {

    double x = 1.0;
    double y = 1.5;

    printf("starting 'for' loop\n");
	// a for loop. 'i' is a variable that is looped over, set to 0 initially. The loop will only run when i<N.
    // i++ is shorthand for: i = i + 1
	for (int i=0; i<N; i++) {
		x += i*y;	//multipy the value of x by i+1
		y += i;		//add i to y
        printf("magnitude of %e and %e is %.5e\n", x, y, magnitude(x, y));	//print the result of our custom calculation
	    }
    printf("\n starting 'while' loop\n");

    //An example while loop. It will keep running as long as the statement in paranetheses is true.
    printf("M = %d\n", M);	//see the current value of M
	while (M > 0) {
		changeM(2);			//divide M by 2. Note that this is dividing an integer by another integer.
        printf("M = %d\n", M);	//see the current value of M
	    }

    printf("\n starting 'while' loop with logical statements \n");
    M = 30;		//reset M to a larger value
    int counter = 0;	//an integer to keep track of how many times we have gone through the while loop
    printf("M = %d\n", M);	//see the current value of M
    while (M > 0) {
		if (counter % 3 == 0) M *= 2;
		else if (counter % 3 == 1) changeM(counter);
		else M += 5;
		counter += 1;		//don't forget to incriment counter
	    printf("M = %d\n", M);	//see the current value of M
	    }


	return 0;	// Gotta love that 'return 0;
	}

//Now we add a definition for the 'changeM' function. Notice that the function changed from the 'basic' code.
void changeM(int m) {
    M /= m;
	}

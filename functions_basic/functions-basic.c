#include <stdio.h>	//Input/Output
#include <stdlib.h>	//Standard libraries
#include <math.h>	//For square roots, exponents, logs, etc.

int M = 200;		//declares and initializes a global variable

//define a function to get the magnitude of a 2D vector. You need to specify what type of value it will return.
double magnitude(double X, double Y) {		//need to specify the type of the function arguments
	return sqrt(X*X + Y*Y);
	}

//declare a function, but save defining it for later.
//This can be useful for long functions if you want 'main' to still be near the top of the file.
void changeM(int m);	//note the semicolon, unlike when we defined 'magnitude'

int main(void) {

	double x = 37.0;
    double y = 684.0;
    printf("magnitude of %g and %g is %g\n", x, y, magnitude(x, y));	//print the result of our custom calculation

    printf("M = %d\n", M);	//print value of global variable M
    changeM(9);	//This will change the value of the global variable M without returning anything.
    printf("M = %d\n", M);	//see if the change worked

    printf("test: %d\n", (int) "c");

	return 0;	// Gotta love that 'return 0;'
	}

//Now we add a definition for the 'changeM' function. Notice that it doesn't return anything.
void changeM(int m) {
    M = m;
	}

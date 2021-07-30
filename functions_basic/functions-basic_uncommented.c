#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int M = 200;

double magnitude(double X, double Y) {
	return sqrt(X*X + Y*Y);
	}

void changeM(int m);

int main(void) {

	double x = 37.0;
    double y = 684.0;
    printf("magnitude of %g and %g is %g\n", x, y, magnitude(x, y));

    printf("M = %d\n", M);
    changeM(57);
    printf("M = %d\n", M);

	return 0;
	}

void changeM(int m) {
    M = m;
	}

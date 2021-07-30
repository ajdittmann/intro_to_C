#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int M = 200;
#define N 10

double magnitude(double X, double Y) {
	return sqrt(X*X + Y*Y);
	}

void changeM(int m);

int main(void) {

    double x = 1.0;
    double y = 1.5;

    printf("starting 'for' loop\n");
	for (int i=0; i<N; i++) {
		x += i*y;
		y += i;
        printf("magnitude of %e and %e is %.5e\n", x, y, magnitude(x, y));
	    }
    printf("\n starting 'while' loop\n");

    printf("M = %d\n", M);
	while (M > 0) {
		changeM(2);
        printf("M = %d\n", M);
	    }

    printf("\n starting 'while' loop with logical statements \n");
    M = 30;
    int counter = 0;
    printf("M = %d\n", M);
    while (M > 0) {
		if (counter % 3 == 0) M *= 2;
		else if (counter % 3 == 1) changeM(counter);
		else M += 5;
		counter += 1;
	    printf("M = %d\n", M);
	    }


	return 0;
	}

void changeM(int m) {
    M /= m;
	}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

int main(void) {

    double x = 1.0;
    double y = 1.5;
    int M = 200;

    printf(" starting 'for' loop\n");
	for (int i=0; i<N; i++) {
		x += i*y;
		y += i;
        printf("magnitude of %e and %e is %.5e\n", x, y, sqrt(x*x + y*y));
	    }
    printf("\n starting 'while' loop\n");

    printf("M = %d\n", M);
	while (M > 0) {
		M = M/2;
        printf("M = %d\n", M);
	    }

    printf("\n starting 'while' loop with logical statements \n");
    M = 30;
    int counter = 0;
    printf("M = %d\n", M);
    while (M > 0) {
		if (counter % 3 == 0) M *= 2;
		else if (counter % 3 == 1) M /= counter;
		else M += 5;
		counter += 1;
	    printf("M = %d\n", M);
	    }


	return 0;
	}


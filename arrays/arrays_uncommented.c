#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Nx = 20;
int Ny = 30;

void set_values(double *output, double **inputs);

int main(void) {

	double *arr1d;
	double **arr2d;

	arr1d = malloc(Nx*sizeof(double));

	for (int i=0; i<Nx; i++) {
		arr1d[i] = 2.0*i;
		}
    printf("value [10] of the 1D array: %e\n", arr1d[10] );

	arr2d = calloc(Nx, sizeof(double *));
	for (int i=0; i<Nx; i++) {
		arr2d[i] = calloc(Ny, sizeof(double));
		}
	printf("value [1][2] of the 2D array: %e\n", arr2d[1][2]);

	for (int i=0; i<Nx; i++) {
		for (int j=0; j<Ny; j++) {
			arr2d[i][j] = 2.0*i + 3.0*j;
			}
		}
	printf("updated value [1][2] of the 2D array: %e\n", arr2d[1][2]);

	set_values(arr1d, arr2d);
	for (int i=0; i<Nx; i++)	printf("value %d of the 1D array: %e\n", i, arr1d[i]);

	free(arr1d);
	for (int i=0; i<Nx; i++) {
		free(arr2d[i]);
		}
	free(arr2d);

	return 0;
	}

void set_values(double *output, double **inputs){
	for (int i=0; i<Nx; i++) {
		double tmp = 0.0;
        for (int j=0; j<Ny; j++) {
			tmp += inputs[i][j]*inputs[i][j];
			}
		output[i] = sqrt(tmp);
		}
	}

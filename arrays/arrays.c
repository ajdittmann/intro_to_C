#include <stdio.h>	//Input/Output
#include <stdlib.h>	//Standard libraries
#include <math.h>	//For square roots, exponents, logs, etc.

int Nx = 20;	//this will be the size of one of our array dimensions
int Ny = 30;	//this will be the size of the other array dimension, where applicable

void set_values(double *output, double **inputs);	//a function that take arrays as inputs/outputs

int main(void) {

	double *arr1d;		//declare a 1D array. Note the single *
	double **arr2d;	//declare a 2D array. This is actually an array of 1D arrays, so it gets 2 *'s
						//you can keep going and declare even higher-dimension arrays if you want to.

	//We need to actually allocate memory for the arrays before we can do anything with them
	arr1d = malloc(Nx*sizeof(double));		//This tells the computer that 'arr1' will be the size of Nx doubles in memory
											//This sets aside memory in the computer that we can use to store values
	//now we can actually set values to the array
	for (int i=0; i<Nx; i++) {
		arr1d[i] = 2.0*i;	//set the initial values of the array
		}
	//print one of the values
    printf("value [10] of the 1D array: %e\n", arr1d[10] );

	arr2d = calloc(Nx, sizeof(double *));	//for the 2D array, we need to set aside memory for Nx 1D arrays
	for (int i=0; i<Nx; i++) {
		arr2d[i] = calloc(Ny, sizeof(double)); //Now allocate memory for each of the 1D arrays that make up the 1D array
		}
	printf("value [1][2] of the 2D array: %e\n", arr2d[1][2]);
	//Note the different syntax for calloc an malloc. Also note that we hadn't initialized the array with any values.
	//Apart from the slightly different syntax, calloc also initializes the array values to 0

    //now lets initialize the 2D array
	for (int i=0; i<Nx; i++) {
		for (int j=0; j<Ny; j++) {
			arr2d[i][j] = 2.0*i + 3.0*j;	//Because a 2D array is an 'array of arrays', you index using[i][j]
			}
		}
	printf("updated value [1][2] of the 2D array: %e\n", arr2d[1][2]);

    //We can use functions to manipulate arrays
	set_values(arr1d, arr2d);
    //We can print each value
	for (int i=0; i<Nx; i++)	printf("value %d of the 1D array: %e\n", i, arr1d[i]);


	//sice we allocated memory, we need to deallocate it too to let the computer know we are done with it.
	//this is EXTREMELY important because not doing it can cause massive bugs when working with more complex codes
	//also if you don't do this your computer can run out of memory ;_; (a "memory leak")

	//for 1D arrays this is pretty easy
	free(arr1d);
	//for 2D arrays, we need to free each 1D array individually first
	for (int i=0; i<Nx; i++) {
		free(arr2d[i]);
		}
	free(arr2d); 	//then we can free the 2D array
	//For 3D, 4D, etc. arrays, you would have even more nested loops...

	return 0;	// Gotta love that 'return 0;
	}

//determines 'output' values as a function of the 2D 'inputs'
//This particular example takes inputs from a 2D array of values in the 'X' and 'Y' dimensions
//The output array stores, for each location in 'X', the square root of the sum of the squares
//of the values along the 'Y' dimension at that point in the 'X' dimension
//This is like taking the magnitude of Nx vecotors that each have Ny elements.
void set_values(double *output, double **inputs){
	for (int i=0; i<Nx; i++) {	//outer loop over 'X'
		double tmp = 0.0;		//temporary variable to do some math with
        for (int j=0; j<Ny; j++) {	//inner loop over 'Y'
			tmp += inputs[i][j]*inputs[i][j];	//store the sum of the square of each element in 'tmp'
			}
		output[i] = sqrt(tmp);		//store the square root of 'tmp' in the output array
		}
	}

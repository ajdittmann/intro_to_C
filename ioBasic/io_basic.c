#include <stdio.h>	//For input/output, we need the I/O functions!
#include <stdlib.h>	//Standard libraries

/*
** A code to show how to pass values from the command line to a C code
** and then print those values back to the terminal. Takes 2 integer
** input values (floats passed will be converted to ints) and prints
** output to the terminal.
*/


int main(int argc,char *argv[]) {	// Note the two arguments that our "main" function takes!

	int x, y;	// Define variables to store the command line arguments

	/* A small bit of code to help people who don't provide the right number
		of command line arguments */
	if (argc != 3) {
		printf("Wrong number of arguments!\n  Usage: %s x y\n", argv[0]);
		return 1;	// 'return 1' exits the code without executing any further!
		}

	/*
	** argc is the number of command line arguments.
	** argv is an array (see later examples) the values stored in each index are:
	**	argv[0] = name of executable
	**	argv[1] = value to be stored in 'x'
	**	argv[2] = value to be stored in 'y'
	**  Everything stored in argv is a string!
	*/

	/* Convert command line arguments from strings to integers & store the values */
	x = atoi(argv[1]);	// 'atoi()' = string -> integer
	y = atoi(argv[2]);	// There is also an 'atof()' function for converting to floats!

	/* Now you can do something with your inputs! Here we just print it out. */

	/* Print out the inputs that we received */
	printf("%s received arguments x = %d and y = %d\n", argv[0], x, y);
		/*
		** 'printf' prints a string that you write, with the '%d' values
		** being placeholders for integer variables you defined in your code.
		** Special inputs like '\n' and '\t' can indicate formatting: new lines
		** and tabs, respectively.
		*/

	return 0;	// Always return 0 at the end of your "main" code!
	}

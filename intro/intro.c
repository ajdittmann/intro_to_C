/* Start by including "header" files, which provide important functionalities for your code */
#include <stdio.h>	// Allows for input and output
#include <stdlib.h>	// "Standard" libraries, the stuff that you often can't do without!

/* Move on to the space where you'll write the *main* part of your code */
int main(void) {	//This declares that we've started the main body of our code - important!!

	/* Now we write the code that we want this to execute */
	printf("Hello world!\n");	// Always end a line of code in a semicolon
		// Remember to put the string argument of the 'printf' function in double quotes!
		// The '\n' escape sequence tells the computer to print a new line at the end.

	/* Now that we need to finish up: return a value and close the brackets that we
		 opened up when we declared the main body of our code! */
	return 0;	// Can't forget that semicolon!
			// When there's nothing significant to return, 'return 0;' is good practice
	}

/* That's it! This is a very heavily commented C code! You can compile it on the command line
	with the command:
		gcc intro.c
	And then run the code with:
		./a.out

	If you want to name the executable something other than 'a.out' (recommended), try:
		gcc intro.c -o [desired name]
*/

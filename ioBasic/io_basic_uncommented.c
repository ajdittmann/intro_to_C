#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {

	int x, y;

	if (argc != 3) {
		printf("Wrong number of arguments!\n  Usage: %s m n\n", argv[0]);
		return 1;
		}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%s received arguments x = %d and y = %d\n", argv[0], x, y);

	return 0;
	}

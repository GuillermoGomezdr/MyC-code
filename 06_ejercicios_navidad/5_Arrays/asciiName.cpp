#include <stdio.h>
#include <stdlib.h>

int main () {

	int nombre[] = {71, 117, 105, 108, 108, 101, 0};	

	for(int i = 0; i < sizeof(nombre)/sizeof(int); i++)
		printf(" %c", nombre[i]);	

	printf(" \n");
	return EXIT_SUCCESS;
}

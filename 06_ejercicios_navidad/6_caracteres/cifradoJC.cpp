#include <stdio.h>
#include <stdlib.h>

int main () {

	char palabra[] = "Cacatua";

	for(int i = 0; i < sizeof(palabra)/sizeof(char) - 1; i++)
		printf(" %c", palabra[i]+3);	
	
	printf(" \n");
	return EXIT_SUCCESS;
}

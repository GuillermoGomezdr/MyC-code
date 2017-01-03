#include <stdio.h>
#include <stdlib.h>

int main () {

	int numB10;

	printf("Introduce un número en base decimal:\n");
	scanf(" %i", &numB10);

	printf("El número %i en base decimal pasa a ser %X en hexadecimal\n", numB10, numB10);
	
	return EXIT_SUCCESS;
}

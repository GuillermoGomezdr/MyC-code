#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char nombre[20];

	printf("Introduzca su nombre:\n");
	scanf(" %s", nombre);

	printf("Tu nombre es %s.\n", nombre);
	
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
	char nombre[20];
	
	printf("Introduzca su nombre de usuario:\n");
	scanf(" %s", nombre);	

	printf("Tu nombre de ususario es %s.\n", nombre);

	return EXIT_SUCCESS;
}

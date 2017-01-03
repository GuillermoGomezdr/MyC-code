#include <stdio.h>
#include <stdlib.h>

int main () {

	char nombreApellido[100];
	char nombre[50], apellido[50];

	printf("Introduce tu nombre:\n");
	scanf(" %s", nombre);
	printf("Introduce tu apellido:\n");
	scanf(" %s", apellido);

	sprintf(nombreApellido, "%s %s", nombre, apellido);
	printf("Te llamas: %s.\n", nombreApellido);
	
	
	return EXIT_SUCCESS;
}

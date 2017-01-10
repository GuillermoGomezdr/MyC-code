#include <stdio.h>
#include <stdlib.h>

int main () {

	char nombreApellido[30];
	char nombre[15], apellido[15];

	printf("Introduce tu nombre:\n");
	//scanf(" %s", nombre);
	fgets(nombre, 15, stdin);
	printf("Introduce tu apellido:\n");
	//scanf(" %s", apellido);
	fgets(apellido, 15, stdin);

	sprintf(nombreApellido, "%s %s", nombre, apellido);
	printf("Te llamas: %s.\n", nombreApellido);
	
	
	return EXIT_SUCCESS;
}

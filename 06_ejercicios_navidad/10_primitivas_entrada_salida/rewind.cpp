#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE * fichero;
	int longitud;

	fichero = fopen("soyUnFichero.txt", "r");
	rewind(fichero);
	longitud = fgetc(fichero);
	printf(" La longitud del archivo es de: %i\n", longitud);
	return EXIT_SUCCESS;
}

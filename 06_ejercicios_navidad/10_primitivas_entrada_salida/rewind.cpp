#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE * fichero;
	int longitud = 0;
	int letra;
		
	fichero = fopen("soyUnFichero.txt", "r");
	rewind(fichero);
	letra = fgetc(fichero);

	while(letra >= 0){
		letra = fgetc(fichero);
		longitud ++;
	}
	printf(" La longitud del archivo es de: %i\n", longitud);
	return EXIT_SUCCESS;
}

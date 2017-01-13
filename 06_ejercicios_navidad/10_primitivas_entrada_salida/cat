#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE * fichero;
	int letra;
		
	fichero = fopen("soyUnFichero.txt", "r");
	rewind(fichero);
	letra = fgetc(fichero);

	while(letra >= 0){
		printf(" %c", letra);
		letra = fgetc(fichero);
	}
	printf("%c\n", letra);
	return EXIT_SUCCESS;
}

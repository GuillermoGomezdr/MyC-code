#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE * fichero;
	int letra;
	int imprimiendo = 0;
		
	fichero = fopen("FicheroCorchetes.txt", "r");
	rewind(fichero);
	letra = fgetc(fichero);

	while(letra >= 0){
		//printf("imprimiendo es: %i\n", imprimiendo);
		if(letra == 91)
			imprimiendo = 1;
		else if(letra == 93)
			imprimiendo = 0;
		if(imprimiendo = 1)
			printf(" %c", letra);
		letra = fgetc(fichero);
	}
	printf("\n");
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	FILE * fichero;
	int num, numMayor = 0, numComprobar=0, contador = 0;
	int letra;	

	fichero = fopen("hS.txt", "r");
	rewind(fichero);
	letra = fgetc(fichero);

	while(letra >= 0){
		if(letra >= 48 && letra <= 57){
			if(contador != 0)
				num*=10;
			num += letra - 48;
			contador ++;
		} else if(letra == 10){
			numComprobar = num;
			num = 0;
			contador = 0;
			if(numMayor < numComprobar)
				numMayor = numComprobar;
		}
		
		letra = fgetc(fichero);
	}

	printf("La mayor puntuación es de: %i\n", numMayor);
	
	return EXIT_SUCCESS;
}

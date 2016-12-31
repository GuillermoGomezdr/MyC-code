#include <stdio.h>
#include <stdlib.h>

int main () {

	int pPrevio = 1, previo = 1, ahora, contador = 2;	
	
	printf(" %i, %i,", pPrevio, previo);

	do{
		ahora = pPrevio + previo;
		printf(" %i,", ahora);
		
		pPrevio = previo;
		previo = ahora;
		contador++;

	}while(contador < 100);
	
	printf(" \n");
	
	return EXIT_SUCCESS;
}

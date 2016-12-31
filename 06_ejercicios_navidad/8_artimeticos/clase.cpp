#include <stdio.h>
#include <stdlib.h>

int main () {


	int nLista, fila = 1, columna;	

	printf("Introduzca el número de lista:\n");
	scanf(" %i", &nLista);
	
	do{
		if(nLista >17){
			nLista -= 17;
			fila ++;
		}
	}while(nLista > 17);
	
	columna = nLista;
	
	printf("El alumno se sienta en la fila %i y en la columna %i\n", fila, columna);

	return EXIT_SUCCESS;
}

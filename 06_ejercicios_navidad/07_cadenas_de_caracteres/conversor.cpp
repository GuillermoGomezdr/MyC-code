#include <stdio.h>
#include <stdlib.h>

int main () {

	//No entiendo muy bien el enunciado, pero voy a probar a ver.
	//Nota 2: No me funciona, lo dejo para luego.

	char dni[8] = "0000000";
	scanf(" %c", dni);
	int convertido;
	
	
	convertido = atoi(dni);
	printf(" %i", convertido);	
	
	return EXIT_SUCCESS;
}

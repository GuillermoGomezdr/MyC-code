#include <stdio.h>
#include <stdlib.h>

int main () {

	//No entiendo muy bien el enunciado, pero voy a probar a ver.
	//Nota 2: No me funciona, lo dejo para luego.

	char dni[9] = "00000000";
	printf("Introduce el número de tu dni\n");
	scanf(" %s", dni);
	int convertido[9] = {0,0,0,0,0,0,0,0};

	
	//convertido = atoi(dni);
	for(int i = 0; i < sizeof(dni)/sizeof(char)-1; i++){
		printf(" %i", dni[i]);	
	}
	printf(" \n");
	return EXIT_SUCCESS;
}

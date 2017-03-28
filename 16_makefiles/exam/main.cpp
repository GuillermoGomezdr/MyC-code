#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

#define N 50

/*void pregunta_nombre(char * nombre){
	printf("Introduce tu nombre:\n");
	scanf("%s", nombre);
}*/


int main () {

	char nombre[N];
	
	pregunta_nombre(nombre);

	return EXIT_SUCCESS;
}

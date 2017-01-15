#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE * fichero;
	char caracteres[100];
	char palabra;	

	printf("Introduce una palabra que buscar:\n");
	scanf(" %c", &palabra);

	fichero = fopen("ficheroEjercicio6.txt", "r");
	rewind(fichero);

	return EXIT_SUCCESS;
}

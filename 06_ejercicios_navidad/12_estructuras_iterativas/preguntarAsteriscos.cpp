#include <stdio.h>
#include <stdlib.h>

int main () {

	int n = 6, nIntroducido = 0;

	printf("******\n¿Cuántos asteriscos hay?\n");
	scanf(" %i", &nIntroducido);

	if( n == nIntroducido)
		printf("Su respuesta es correcta.\n");
	else
		printf("Su respuesta es incorrecta.\n");
	
	return EXIT_SUCCESS;
}

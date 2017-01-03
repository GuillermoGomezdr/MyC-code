#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numFavorito;

	printf("¿Cuál es tu número favorito?\n");
	scanf(" %i", &numFavorito);
	printf("Tu número favorito es el %i\n.", numFavorito);
	
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vector1[2], vector2[2];
	int productoE;

	printf("Introduzca el valor X del primer vector\n");
	scanf(" %i", &vector1[0]);	
	printf("Introduzca el valor Y del primer vector\n");
	scanf(" %i", &vector1[1]);	
	
	printf("Introduzca el valor X del segundo vector\n");
	scanf(" %i", &vector2[0]);	
	printf("Introduzca el valor Y del segundo vector\n");
	scanf(" %i", &vector2[1]);

	productoE = vector1[0] * vector2[0] + vector1[1] * vector2[1];
	printf("El producto escalar de ambos vectores será: %i.\n", productoE);
	

	return EXIT_SUCCESS;
}

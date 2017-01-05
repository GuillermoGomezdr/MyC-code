#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int numB10, multiplicacion = 0;
	
	printf("Introduce un número para multiplicarlo por 320:\n");
	scanf(" %i", &numB10);

	multiplicacion = numB10 << 6;
	multiplicacion += numB10 << 8;
	printf("El resultado es: %i.\n", multiplicacion);

	return EXIT_SUCCESS;
}

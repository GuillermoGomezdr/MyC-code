#include <stdio.h>
#include <stdlib.h>

int main () {
	int var1, var2, varCambio;
	
	printf("Introduce un número en la primera caja:\n");
	scanf(" %i", &var1);
	printf("Introduce un número en la segunda caja:\n");
	scanf(" %i", &var2);

	printf("Ahora intercambiaremos los números de caja\n...\n...\n");
	varCambio = var1;
	var1 = var2;
	var2 = varCambio;

	printf("Ahora la primera caja contiene un %i, y la segunda caja un %i\n", var1, var2);

	
	return EXIT_SUCCESS;
}

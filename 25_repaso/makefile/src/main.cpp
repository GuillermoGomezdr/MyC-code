#include <stdio.h>
#include <stdlib.h>

#include "suma.h"

int main () {
 
	int num1, num2, resultado;
	
	printf("Introduce un número:\n");
	scanf("%i", &num1);
	printf("Introduce otro número:\n");
	scanf("%i", &num2);

	resultado = suma(num1, num2);

	printf("El resultado de la suma de ambos es: %i.\n", resultado);
	
	return EXIT_SUCCESS;
}

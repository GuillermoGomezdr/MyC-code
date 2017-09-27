#include <stdio.h>
#include <stdlib.h>

#include "suma.h"

int main () {

	int num1, num2;
	printf("Introduce un número:\n");
	scanf("%i", &num1);

	printf("Introduce otro número:\n");
	scanf("%i", &num2);

	printf("El resultado de sumar ambos es: %i\n", suma(num1,num2));

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
	int Op1, Op2, resultado = 0;

	printf("Introduce un número en Op1: \n");
	scanf(" %i", &Op1);

	printf("Introduce un número en Op2: \n");
	scanf(" %i", &Op2);

	do{
		if(Op1%2 == 1)
			resultado += Op2;

		Op2 *=2;
		Op1 /=2;
	} while (Op1 > 0);

	printf("El resultado final es: %i \n", resultado);

	return EXIT_SUCCESS;
}

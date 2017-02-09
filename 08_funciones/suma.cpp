#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2){
	return num1 + num2;
}

int main () {
	int resultado;

	resultado = suma(2,3);
	printf(" %i\n", resultado);

	return EXIT_SUCCESS;
}

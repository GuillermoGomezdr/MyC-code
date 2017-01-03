#include <stdio.h>
#include <stdlib.h>

int main () {

	int numero;
	printf("Introduce un número:\n");
	scanf("%i", &numero);

	for (int i = 2; i < numero; i++){
		if(numero % i == 0){
			printf("Tu número tiene más divisores aparte de 1 y sí mismo\n");
			return EXIT_SUCCESS;
		}
	}

	printf("Tu número no tiene más divisores que 1 y sí mismo\n");
	return EXIT_SUCCESS;
}

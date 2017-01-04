#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char numero[100];
	int contador = 0;

	printf("Introduzca un número:\n");
	scanf(" %s", numero);
	
	while(numero[contador] != '\0')
		contador++;

	printf("Su número volteado es: ");

	while(contador >= 0){
		printf(" %c", numero[contador]);
		contador--;
	}
	printf("\n");

	return EXIT_SUCCESS;
}

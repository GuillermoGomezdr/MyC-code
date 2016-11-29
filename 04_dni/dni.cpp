#include <stdio.h>
#include <stdlib.h>

int main () {
	int dni;
	int resto;
	char letra[] = {"TRWAGMYFPDXBNJZSQVHLCKE"};

	printf("Introduce tu número de DNI \n");
	scanf(" %i", &dni);
	
	resto = dni%23;
	printf("Tu letra es %c \n", letra[resto]);
		
	return EXIT_SUCCESS;
}

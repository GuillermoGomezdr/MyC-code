#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char nombre;

	printf("Introduzca su nombre de usuario:\n");
	scanf("%c", &nombre);

	printf("Tu nombre de usuario es:\n%c\n", nombre);

	return EXIT_SUCCESS;
}

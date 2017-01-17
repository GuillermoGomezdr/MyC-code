#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x200

int main () {
	char buffer[N];
	char *palabra;

	printf("Intrduzca su nombre:");
	fgets(buffer, N, stdin);

	palabra = (char *) malloc(strlen(buffer)+1);
	strcpy(palabra, buffer);

	printf("La palabra que has escrito es: %s\n", palabra);

	free(palabra);
	return EXIT_SUCCESS;
}

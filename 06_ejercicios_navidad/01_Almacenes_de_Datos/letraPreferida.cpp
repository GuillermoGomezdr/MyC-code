#include <stdio.h>
#include <stdlib.h>

int main () {
	char letra;

	printf("Introduce tu letra preferida:\n");
	scanf("%c", &letra);

	printf("Tu letra favorita es:\n%c\n", letra);

	return EXIT_SUCCESS;
}

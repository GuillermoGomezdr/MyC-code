#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *tubo;

	tubo = fopen("ficheroInexitente.txt", "w");

	printf("hola!\n"); //Imprime en pantalla, aunque no especifiquemos su tubo.
	fprintf(stdout, "Patata\n"); //Imprime en la pantalla, especificandolo.
	fprintf(tubo, "hola!!\n"); //Imprime en la variable tubo, es decir en ficheroInexitente.txt 

	fclose(tubo);

	return EXIT_SUCCESS;
}

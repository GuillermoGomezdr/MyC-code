#include <stdio.h>
#include <stdlib.h>

bool es_par(int n){
	if(n%2 == 0)
		return 1;
	else 
		return 0;
}

int main () {
	int numero;
	printf("Numero: ");
	scanf(" %i", &numero);

	printf("Tu número %ses par.\n", es_par(numero)? "": "no ");

	return EXIT_SUCCESS;
}

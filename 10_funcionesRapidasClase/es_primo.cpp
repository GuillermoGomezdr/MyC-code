#include <stdio.h>
#include <stdlib.h>

bool es_primo(int n){
	for(int i = n-1; i > 1 ;i--)
		if(n%i == 0)
			return 0;
	return 1;
}

int main () {

	int numero;
	printf("Número: ");
	scanf(" %i", &numero);

	printf(" %i %sprimo.\n", numero, es_primo(numero)? "es ":"no es ");
	return EXIT_SUCCESS;
}

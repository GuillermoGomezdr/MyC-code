#include <stdio.h>
#include <stdlib.h>

bool es_primo(int n){

	int sumDiv=0;

	for(int i = n-1; i > 0 ;i--)
		if(n%i == 0)
			sumDiv+= i;
	if(n == sumDiv)
		return 1;
	return 0;
}

int main () {

	int numero;
	printf("Número: ");
	scanf(" %i", &numero);

	printf(" %i %sperfecto.\n", numero, es_primo(numero)? "es ":"no es ");
	return EXIT_SUCCESS;
}

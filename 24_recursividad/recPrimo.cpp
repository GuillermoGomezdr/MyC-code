#include <stdio.h>
#include <stdlib.h>

bool es_primo(int p, int d){
	if(d == 1)
		return true;
	return p%d != 0 && es_primo(p, d-1);
}

int main () {
	int num;

	printf("Elige un número para comprobar si es primo: ");
	scanf(" %i", &num);

	if(es_primo(num, num-1))
		printf("Es primo.\n");
	else 
		printf("No es primo.\n");	

	return EXIT_SUCCESS;
}

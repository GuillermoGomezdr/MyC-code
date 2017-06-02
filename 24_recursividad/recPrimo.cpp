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

	switch(es_primo(num, num-1)){
		case true:
			printf("Es primo.\n");
		break;
		case false:
			printf("No es primo.\n");
		break;
	}	

	return EXIT_SUCCESS;
}

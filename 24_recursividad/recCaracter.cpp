#include <stdio.h>
#include <stdlib.h>


void imprimirLetras(const char *p){
	printf(" %c", *p);
	if(*p != '\0')
		imprimirLetras(p+1);
}

int main () {

	const char palabra[] ="Patata";
	
	imprimirLetras(&palabra[0]);
	printf("\n");

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>


void imprimirLetras(const char *p){
	printf(" %c", *p);
	if(*p != '\0'){
		*p++;
		imprimirLetras(p);
	}
}

int main () {

	const char *palabra ="Patata";
	
	imprimirLetras(palabra);
	printf("\n");

	return EXIT_SUCCESS;
}

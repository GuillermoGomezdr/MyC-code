#include <stdio.h>
#include <stdlib.h>

void leer(double *base, double *exponente){	
	printf("Introduce la base:");
	scanf(" %lf", base);

	printf("Introduce el exponente:");
	scanf(" %lf", exponente);	
	
}

int main () {		
	double base, exponente;
		
	leer(&base, &exponente);
	
	printf(" %lf %lf\n", base, exponente);	
	
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double resolver_polinomio(double pol[100], double x){
	double suma = 0;
	
	for(int i = 0; i<100; i++)
		suma += pol[i]*pow(x,i);

	printf(" %.0lf\n", suma);
	return suma;
} 

int main () {

	double polinomio[100];
	double x=0, contenedor;
	int indice = 0;
	
	printf("Introduce el valor de x: ");
	scanf(" %lf", &x);
	
	printf("Introduce el polinomio: \n");
	printf("Nota: Para terminar, introduce una letra cualquiera.\n");
	while(scanf(" %lf", &contenedor)){
		polinomio[indice++] = contenedor;
	}	

	resolver_polinomio(polinomio, x);

	return EXIT_SUCCESS;
}

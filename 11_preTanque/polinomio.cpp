#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 5

double resolver_polinomio(double pol[N], double x){
	double suma = 0;
	
	for(int i = 0; i<N; i++)
		suma += pol[i]*pow(x,i);

	printf(" %.0lf\n", suma);
	return suma;
}

int main () {

	double polinomio[N];
	double x;
	
	printf("Introduce el polinomio: ");
	for(int i = 0; i<N; i++)
		scanf(" %lf", &polinomio[i]);
	
	printf("Introduce el valor de x: ");
	scanf(" %lf", &x);

	resolver_polinomio(polinomio, x);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

double suma(double op1, double op2){
	return op1+op2;
}

int main () {
	
	double resultado1, resultado2;

	double (*directo) (double, double);
	double (*indirecto) (double, double);
	directo = suma;
	indirecto = &suma;
	
	resultado1 = directo(1.25, 2.75);
	resultado2 = (*indirecto)(1.25, 3.75);

	printf("Directo: %lf\nIndirecto: %lf\n", resultado1, resultado2);

	return EXIT_SUCCESS;
}

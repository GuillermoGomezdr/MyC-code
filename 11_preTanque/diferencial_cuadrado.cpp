#include <stdio.h>
#include <stdlib.h>

#define INC 0.5

double x_cuad(double x){
	return x*x;
}

double diferencial(double v1, double v2, double t1, double t2){
	return (v2-v1)/(t2-t1);
}

int main () {
	
	double valor;
	double cuadradoV, cuadradoI;
	double resultado;

	printf("Introduce un valor:\n");
	scanf(" %lf", &valor);

	cuadradoV = x_cuad(valor);
	cuadradoI = x_cuad(valor + INC);

	resultado = diferencial(cuadradoV, cuadradoI, valor, valor + INC);


	printf(" %lf\n", resultado);

	return EXIT_SUCCESS;
}

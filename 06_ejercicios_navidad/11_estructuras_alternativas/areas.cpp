#include <stdio.h>
#include <stdlib.h>

int main () {

	int figura;
	int resultado = 0;
	int base1 = 0, base2 = 0, altura = 0, radio = 0;


	printf("Este es un programa para realizar el área de alguna figuras geométricas.\nPara poder realizar el área de un cuadrado, por favor, escriba: 1\nPara poder realizar el área de un rectángulo, por favor, escriba: 2\nPara poder realizar el área de un triángulo, por favor, escriba: 3\nPara poder realizar el área de un círculo, por favor, escriba: 4\nPara poder realizar el ára de un trapecio escriba: 5\nAhora, introduzca el número correspondiente a la operación que quiera realizar:\n");
	scanf(" %i", &figura);

	if(figura == 1){
		printf("Área de un cuadrado.\nIntroduzca la longitud de uno de sus lados:\n");
		scanf(" %i", &base1);
		resultado = base1 * base1;
	} else if (figura == 2){
		printf("Área de un rectángulo.\nIntroduzca el valor de su base:\n");
		scanf(" %i", &base1);
		printf("Introduzca el valor de su altura:\n");
		scanf(" %i", &altura);

		resultado = base1 * altura;
	} else if (figura == 3){
		printf("Área de un triángulo.\nIntroduzca el valor de su base:\n");
		scanf(" %i", &base1); 
		printf("Introduzca el valor de su altura:\n");
		scanf(" %i", &altura); 

		resultado = base1 * altura / 2;
	} else if (figura == 4){
		printf("Área de un círculo.\nIntroduzca el valor de su radio:\n");
		scanf(" %i", &radio);
		
		resultado = 3.141592 * radio * radio;
	} else if (figura == 5){
		printf("Área de un trapecio.\nIntroduzca el valor de su base mayor:\n");
		scanf(" %i", &base1);
		printf("Introduzca ahora el valor de su otra base:\n");
		scanf(" %i", &base2);
		printf("Introduzca ahora el valor de su altura vertical:\n");
		scanf(" %i", &altura);

		resultado = (base1 + base2) * altura / 2;
	} else {
		printf("Número incorrecto. Figura no detectada. \n");
	}

	printf("El área de su figura es de: %i.\n", resultado);

	return EXIT_SUCCESS;
}

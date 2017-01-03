#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int numB10, base = 0, dividendo, contador = 0, resultado = 0;

	printf("Introduce un número (expresado en decimal):\n");
	scanf(" %i", &numB10);
	
	while(base < 2 || base > 9){
		printf("Introduce la base a la que quieres la conversión (Menor de 10): \n");
		scanf(" %i", &base);
	}

	dividendo = numB10;
	while(dividendo > base){
		resultado += (dividendo % base) * pow(10, contador);
		contador++;
		dividendo /= base;  
	}
	
	resultado += dividendo * pow(10, contador);
	printf("El resultado de pasar el número %i en base decimal a base %i es de: %i.\n", numB10, base, resultado);
		

	return EXIT_SUCCESS;
}

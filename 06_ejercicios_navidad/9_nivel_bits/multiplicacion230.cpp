#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	//En mi mente esto tenía sentido que funcionase.
	//Pero no. No lo hace.

	//variables de la primera parte.
	int numB10, dividendo, contador = 0, numB2 = 0;

	//variables de la segunda parte.
	int multiplicacion;
	
	//variables de la tercera parte.
	int resultado;

//Primera parte: Pasar el número introducido a binario.
	printf("Introduce un número para multiplicarlo por 320:\n");
	scanf(" %i", &numB10);

	dividendo = numB10;
	while(dividendo > 2){
		numB2 += (dividendo % 2) * pow(10, contador);
		contador++;
		dividendo /= 2;  
	}
	
	numB2 += dividendo * pow(10, contador);
	//printf(" %i", numB2);
	

//Segunda parte: Multiplicación usando solo desplazamiento de bits.
	multiplicacion = numB2 << 8 + numB2 >> 6;
	//printf(" %i", multiplicacion);

//Tercera parte: Volver a pasar el resultado de la multiplicación a decimal.
	contador = 0;

	while(multiplicacion > 0){
		if(multiplicacion > 0){
			contador++;
		} else{
			resultado += pow(2, contador);
			multiplicacion -= pow(10, contador);
			contador++;
		}
	}

	printf(" Resultado: %i. \n", resultado); 

	return EXIT_SUCCESS;
}

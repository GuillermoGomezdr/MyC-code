#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int numB10, dividendo, contador = 0, numB2 = 0;
	int resultado = 0;
	int encender;
	int nIntroducido;
//Primera parte: Pasar el número introducido a binario.
	printf("Introduce un número:\n");
	scanf(" %i", &numB10);

	dividendo = numB10;
	while(dividendo >= 2){
		numB2 += (dividendo % 2) * pow(10, contador);
		contador++;
		dividendo /= 2;  
	}
	
	numB2 += dividendo * pow(10, contador);
	printf("Su número es binario es: %i\nEscribe un 1 si quieres encender un bit, o un 0 si lo quieres apagar.\n", numB2);
	scanf(" %i", &encender);
       	
	if(encender == 1){
		printf("Contando de derecha a izquierda (siendo el número más a la derecha el 0), ¿qué bit quiere encender?\n");
		scanf(" %i", &nIntroducido);
		numB2 += pow(10,nIntroducido);
	} else if (encender == 0){
		printf("Contando de derecha a izquierda (siendo el número más a la derecha el 0), ¿qué bit quiere apagar?\n");
		scanf(" %i", &nIntroducido);
		numB2 -= pow(10, nIntroducido);
	}

	printf("Su nuevo número en binario es: %i\n", numB2);	

//A partir de aquí se pasa de decimal a binario.
	contador = 0;

	while(numB2 > 0){
		if(numB2 % 2 == 0){
			contador++;
			numB2 /= 10;
		} else{
			resultado += pow (2, contador);
			numB2 -= 1;
			numB2 /= 10;
			contador++;
		}	
	}

	printf(" Resultado en decimal: %i. \n", resultado); 

	return EXIT_SUCCESS;
}

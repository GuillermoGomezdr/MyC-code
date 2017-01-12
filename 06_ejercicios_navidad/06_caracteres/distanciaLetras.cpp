#include <stdio.h>
#include <stdlib.h>

int main () {

	char letra1, letra2, comprobarLetra; 
	FILE * abecedario;
	int distancia = 0;
	int empezar = 0;

	printf("Vamos a calcular la distancia de una letra respecto a otra en el abecedario.\nEscribe una leta (en minúsculas):");
	scanf(" %c", &letra1);
	printf("Ahora escribe otra (en minúsculas):");
	scanf(" %c", &letra2);

	abecedario = fopen("abecedario.txt", "r");
	rewind(abecedario);
	comprobarLetra = fgetc(abecedario);

	while (empezar == 0){
		if (letra1 != comprobarLetra || letra2 == comprobarLetra){
			empezar = 1;
		}else 
			comprobarLetra = fgetc(abecedario);	
	}
		
	while(empezar == 1){
		if (letra1 == comprobarLetra || letra2 == comprobarLetra)
			empezar = 0;
		distancia ++;
		comprobarLetra = fgetc(abecedario);
	}

	printf("La longitud entra la letra %c y la letra %c es de %i\n", letra1, letra2, distancia);

	/*for(int i = 0; i < sizeof(abecedario)/sizeof(char) - 1; i++){
		if(letra1 == abecedario[i] || letra2 == abecedario[i]){
			if(empezar == 0){
				empezar = 1;
				distancia ++;
			}else if(empezar == 1){
				printf("La distancia entra la primera y la segunda letra es de = %i\n", distancia);
			}
		} else if (empezar == 1)
			distancia++;
	}*/


	
	return EXIT_SUCCESS;
}

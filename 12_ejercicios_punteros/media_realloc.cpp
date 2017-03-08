#include <stdio.h>
#include <stdlib.h>

#define N 100

int main () {

	int *notas;	
	int nota= 0;
	int sumNota = 0;
	int contador = 0;


	printf("Introduce la notas a continuación. \nCuando quieras parar escribe un número negativo.\n");
	scanf(" %i", &nota);
	
	while(nota>= 0){
		notas = (int*) realloc(notas, ++contador*sizeof(int));
		notas[contador-1] = nota;
		
		sumNota+= nota;		
		scanf(" %i", &nota);
	}

	sumNota /= contador;
	printf("La media es: %i\n", sumNota);

	free(notas);
	return EXIT_SUCCESS;
}

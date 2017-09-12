#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/*
Escribe un programa que pregunte números al usuario y los almacene en una pila de
números. Cuando pulse intro devuelve el último número de la pila por pantalla. Si ha
introducido algún número pinta la pila entera. 

Recordatorio: scanf devuelve la cantidad de términos leídos. scanf quita los saltos de 
línea si la cadena de formato empieza por un espacio, de manera que, no podrías leer
sólo un intro. (3 puntos)
*/


// En proceso.

struct TPila{
	int num[MAX];
	int cima;
};

void push (TPila *pilaPush, int numPush){
	pilaPush -> num[pilaPush -> cima] = numPush;
	pilaPush -> cima++;
	printf("El número introducido es: %i. \n", numPush);
}

void imprimir (TPila *pilaImp, int numCima){
	int numArray = numCima;
	for(int i=0; i<numCima; i++){
		//printf("i = %i // cima = %i \n", i, numCima);
		printf("El número %i introducido es: %i. \n", i, pilaImp -> num[i]);
	}
}


int main () {
	TPila pila;
	
	for(int i = 0; i< MAX; i++){
		pila.num[i] = 0;
	}
	pila.cima = 0;

	int numIntroducido;
	
	while(1){	
		printf("Introduce un número:");
		scanf("%i", &numIntroducido);

		if(numIntroducido / numIntroducido == 1)
			push(&pila,numIntroducido);
		else
			imprimir(&pila, pila.cima);
		}

	return EXIT_SUCCESS;
}

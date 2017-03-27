#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int dato;
	struct nodo* siguiente;
}nodo;

void push(){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
	printf("Introduce el valor del nuevo nodo");
	//scanf(" %i", );
}

void pop(){

}

int main () {

	int num;
	printf("Para añadir un nuevo valor a la pila, pulse 1.\nPara quitar el último valor de la pila, pulse 2.\nPara salir, pulse 3.\n");
	while(1){
		scanf(" %i", &num);
		if(num == 1)
			push();
		else if(num == 2)
			pop();
		else if(num == 3)
			return EXIT_SUCCESS;
		else
			printf("El número introducido no está asignado a ninguna acción.\n Introduzca de nuevo el número.\n");
	}
		
	return EXIT_SUCCESS;
}

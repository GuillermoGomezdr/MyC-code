#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define N 5

struct TQueue{
	char buffer[N];
	int summit;
	int head;
};

bool push(struct TQueue *b, unsigned char c){
	if(b -> summit+1 == b -> head){
		printf("Pila ha alcanzado su tope.");
		return false;
	}
	b -> buffer[b->summit++] = c;
	return true;
}

bool pop(struct TQueue *b){
	if(b -> summit == b -> head){
		printf("Pila vacía.");
	}

	b -> buffer[b -> head] = /*NO SE QUE NARICES PONER AQUI, ¡AGH!*/;
	b -> head++;
	if(b -> head == N)
		b -> head = 0;
}

void mostrar(struct TQueue b){
	for(int i = 0; i < N; i++)
		printf("%i //", b.buffer[i]);
	printf("\n");
}

int main () {
	
	struct TQueue pila;
	bzero(&pila, sizeof(pila));

	int num;
	char letra;

	printf("Para añadir un nuevo valor a la pila, pulse 1.\nPara quitar el valor más antiguo de la pila, pulse 2.\nPara mostrar la pila, pulse 3.\nPara salir, pulse 4.\n");
	while(1){
		if(num == 1){
			printf("Introduzca una letra: \n");
			scanf("%c", &letra);
			push(&pila, letra);
		} else if (num == 2)
			pop(&pila);
		else if(num == 3)
			mostrar(pila);
		else if(num == 4)
			return EXIT_SUCCESS;
		else
			printf("El número introducido no está asignado a ninguna acción.\n Introduzca de nuevo el número.\n");
	}

	return EXIT_SUCCESS;
}

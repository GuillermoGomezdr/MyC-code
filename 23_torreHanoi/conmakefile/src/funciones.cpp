#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#include "hanoi.h"

//#define MAX 3

/*struct TPila{
	int tipo[MAX];
	int cima;
};*/

void push(struct TPila *pila, int dato){
	if(pila -> cima >= MAX){
		printf("Cima superada.\n");
	}
	
	pila -> tipo[pila -> cima++] = dato;
}

int pop(struct TPila *pila){
	int v =	pila -> tipo[pila -> cima-1];
	int pCima = pila -> cima;
	if(pila ->cima <= 0){
		printf("La cima ya es 0, no puede bajar más.\n");
		return 0;
	}
	pila -> tipo[pila -> cima-1] = 0;
	pila -> cima--;
	return v;
}

void imprimirPlato(struct TPila *plato){
	for(int i = 3; i>0; i--){	
		if(i==3 && plato -> cima != 0)
			printf("   |   \n");
		if(plato -> cima >= i && plato -> cima != 0){
			switch(plato -> tipo[i-1]){
			case 1:
				printf("  █|█  \n");
			break;
			case 2:
				printf(" ██|██ \n");
			break;
			case 3:
				printf("███|███\n");
			break;
			}
		}else
			printf("   |   	\n");
	}
}

void realizarCambio(struct TPila *platoTo, struct TPila *platoFrom){
	int piezaCambiante;
	if((platoTo -> cima == 0) || (platoTo -> tipo[platoTo -> cima -1] > platoFrom -> tipo[platoFrom -> cima -1])){
		printf("¡Intercambio realizado correctamente!\n");
		piezaCambiante = pop(platoFrom);
		push(platoTo, piezaCambiante);	
	} else {
		printf("El plato al que quieres moverte, tiene una pieza más pequeña que la que quieres mover. No puedes realizar la acción.\n");
	}

}



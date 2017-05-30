#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct TPila{
	int tipo[];
	int cima;
};

/*
bool push(struct TPila *pila, struct TPosic *dato){
	if(pila -> cima >= Max_Pila){
		printf("Cima superada.\n");
		return false;
	}
	pila -> tipo[pila -> cima++] = dato;
	return true;
}

bool pop(struct TPila *pila){
	if(pila ->cima <= 0){
		("La cima ya es 0, no puede bajar más.\n");
		return false;
	}

	pila -> cima--;
	free(pila -> tipo[pila->cima]);
	return true;
}*/

void imprimirPlato(struct TPila plato){
	
}

int main () {
	
	int nfrom, nto, comprobarMov;

	struct TPila plato1, plato2, plato3;

	plato2.cima = 0;
	plato3.cima = 0;

	plato1.tipo[0] = 3;
	plato1.tipo[1] = 2;
	plato1.tipo[2] = 1;
	plato1.cima = 3;

	while(1){
		printf("Elige un plato desde el que mover:");
		scanf(" %i", &nfrom);
		
		switch(nfrom){
			case 1:
				if(plato1.cima > 0)
					comprobarMov++;			
			break;
			case 2:
				if(plato2.cima > 0)
					comprobarMov++;		
			break;
			case 3:
				if(plato3.cima > 0)
					comprobarMov++;			
			break;
		}
		if(comprobarMov){	
			printf("Elige un plato al que mover:");
			scanf(" %i", &nto);
			

			comprobarMov = 0;
		}

		for(int i = 0; i < 3; i++){
			
		}
	}

	return EXIT_SUCCESS;
}

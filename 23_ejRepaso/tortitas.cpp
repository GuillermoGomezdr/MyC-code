#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define t1 4
#define t2 3
#define t3 2
#define t4 1

#define Max_Pila 4

struct TPila{
	int tipo[];
	int cima;
};

bool pus(struct TPila *pila, struct TPosic *dato){
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
}

int main () {
	
	int nfrom, nto;

	struct TPila plato1, plato2, plato3;


	bzero(&plato1, sizeof(plato1));
	bzero(&plato2, sizeof(plato2));
	bzero(&plato3, sizeof(plato3));
	
	while(true){
		printf("Elige uno de los 3 platos para mover:");
		scanf(" %i", &nfrom);
		printf("Elige uno de los 3 platos a los que mover:");	
		scanf(" %i", &nto);

		if(nfrom >= 1 && nfrom <=3 && nto >= 1 && nto <= 3){
			if(nfrom <= 0)
				printf("Error. En el plato a mover no hay nada.");
			else{
				switch(nfrom){
					case 1:
						pop(&plato1);
					break;
					case 2:
						pop(&plato2);
					break;
					case 3:
						pop(&plato3);
					break;
				}		
			}
		} else
			printf("Error. Recuerde, los platos estan numerados de 1 a 3.");
	}
	
	return EXIT_SUCCESS;
}

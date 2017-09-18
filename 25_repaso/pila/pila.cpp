#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

#define Max_Pila 100

struct TCoord{
	int x;
	int y;
};

struct TPila{
	struct TCoord *data[Max_Pila];
	int cima;	
};

struct TCoord *valor_random(){
	struct TCoord *nueva;
	nueva = (struct TCoord *) malloc(sizeof(struct TCoord));
	nueva -> x = rand() % Max_Pila;
	nueva -> y = rand() % Max_Pila;
	return nueva;
}

bool push(struct TPila *pila, struct TCoord *dato){
	if(pila -> cima >= Max_Pila){
		printf("La pila ha alcanzado su tope. Vacía alguna posición antes de volver a intentar añadir más.\n");
		return false;
	}
	pila -> data[pila->cima++] = dato;
	printf("Añadimos a la pila la posición %i, que contiene: (%i, %i)\n", pila->cima-1,pila->data[pila->cima-1]->x, pila->data[pila->cima-1]->y);

	return true;
}

bool pop(struct TPila *pila){
	if(pila -> cima <= 0){
		printf("Pila vacía.\n");
		return false;
	}
	printf("Quitamos de la pila la posición %i, que contiene: (%i, %i)\n", pila->cima-1,pila->data[pila->cima-1]->x, pila->data[pila->cima-1]->y);
	pila -> cima--;
	free(pila->data[pila->cima]);
	return true;

}

void mostrar(struct TPila pila){
	for(int i = 0; i<pila.cima; i++)
		printf("Posicion %i de la pila: (%i, %i)\n", i, pila.data[i]->x, pila.data[i]->y);
}
 
int main () {

	struct TPila objConCoord;
	
	bzero(&objConCoord, sizeof(objConCoord));

	int num;
	printf("Para añadir un nuevo valor a la pila, pulse 1.\nPara quitar el último valor de la pila, pulse 2.\n");
	printf("Para borrar toda la pila, pulse 3.\nPara mostrar toda la pila, pulse 4\nPara salir, pulse 5.\n");
	while(1){
		scanf(" %i", &num);
		if(num == 1)
			push(&objConCoord, valor_random());
		else if(num == 2)
			pop(&objConCoord);
		else if(num == 3){  
			while(pop(&objConCoord));
			printf("Borrado.\nPila ahora vacía.\n");
		}
		else if(num == 4)
			mostrar(objConCoord);
		else if(num ==5)
			return EXIT_SUCCESS;
		else
			printf("El número introducido no está asignado a ninguna acción.\n Introduzca de nuevo el número.\n");
	}
		
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX 3

struct TPila{
	int tipo[MAX];
	int cima;
};

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
		printf("Comienza el intercambio\n");
		piezaCambiante = pop(platoFrom);
		push(platoTo, piezaCambiante);	
	} else {
		printf("cima %i to %i // cima %i from %i\n", platoTo -> cima, platoTo -> tipo[platoTo -> cima-1], platoFrom -> cima, platoFrom ->tipo[platoFrom -> cima-1]);
		printf("El plato al que quieres moverte, tiene una pieza más pequeña que la que quieres mover. No puedes realizar la acción.\n");
	}

}



int main () {
	
	int nfrom, nto, nmov, comprobarMov;
	int contador = 0;
	struct TPila plato1, plato2, plato3;

	plato2.cima = 0;
	plato3.cima = 0;

	plato1.tipo[MAX];
	for(int i=0; i<MAX; i++){
		plato1.tipo[i] = MAX-i;
		plato2.tipo[i] = 0;
		plato3.tipo[i] = 0;
	}
	plato1.cima = 3;	
	
	imprimirPlato(&plato1);
	printf("▨▨▨▨▨▨\n\n");
	imprimirPlato(&plato2);
	printf("▨▨▨▨▨▨\n\n");
	imprimirPlato(&plato3);
	printf("▨▨▨▨▨▨\n\n");
	


	while(1){
		printf("Elige un plato desde el que mover:");
		scanf(" %i", &nfrom);
		
		switch(nfrom){
			case 1:
				if(plato1.cima > 0)
					comprobarMov++;
				nmov = plato1.tipo[plato1.cima-1];			
			break;
			case 2:
				if(plato2.cima > 0)
					comprobarMov++;
				nmov = plato2.tipo[plato2.cima-1];		
			break;
			case 3:
				if(plato3.cima > 0)
					comprobarMov++;	
				nmov = plato3.tipo[plato3.cima-1];		
			break;
		}

		if(comprobarMov){	
			printf("Elige un plato al que mover:");
			scanf(" %i", &nto);
			system("clear");
			
			if(nfrom == nto)
				printf("Estás intentando mover algo al mismo plato.\n");
			else{		
				switch(nto){
					case 1:
						if(nfrom == 2){
							realizarCambio(&plato1, &plato2);
						}else if(nfrom == 3){
							realizarCambio(&plato1, &plato3);
						}
					break;
					case 2: 
						if(nfrom == 1){
							realizarCambio(&plato2, &plato1);
						}else if(nfrom == 3){
							realizarCambio(&plato2, &plato3);
						}
					break;
					case 3:
						if(nfrom == 1){
							realizarCambio(&plato3, &plato1);
						} else if (nfrom == 2){
							realizarCambio(&plato3, &plato2);
						}
					break;
				}			
			}
			/*printf("Plato 1: %i, %i, %i\n", plato1.tipo[0], plato1.tipo[1], plato1.tipo[2]);
			printf("Plato 2: %i, %i, %i\n", plato2.tipo[0], plato2.tipo[1], plato2.tipo[2]);	
			printf("Plato 3: %i, %i, %i\n", plato3.tipo[0], plato3.tipo[1], plato3.tipo[2]);				
			printf("Cimas: 1-%i , 2-%i, 3-%i\n", plato1.cima, plato2.cima, plato3.cima);*/
			comprobarMov = 0;
			printf("Número de movimientos realizados: %i.\n", ++contador);
		} else {
			system("clear");
			printf("El plato elegido esta vacio. Vuelve a intentarlo.\n");			
		}


		imprimirPlato(&plato1);
		printf("▨▨▨▨▨▨\n\n");
		imprimirPlato(&plato2);
		printf("▨▨▨▨▨▨\n\n");
		imprimirPlato(&plato3);
		printf("▨▨▨▨▨▨\n\n");

		if(plato3.cima == 3){
			printf("¡Enhorabuena, has superado la Torre de Hanoi!\n");
			if(contador == 7)
				printf("... Y además en el número mínimo de movimientos. ¡Congrats!\n");
			else 
				printf("¿Sabías que la torre de Hanoi se puede hacer en solo 7 movimientos?\n¿Eres capaz de hacerlo?\n");
			return EXIT_SUCCESS;
		}
	}

	return EXIT_SUCCESS;
}

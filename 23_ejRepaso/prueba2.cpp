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
	printf("Paso : %i\n", v);

	pila -> cima--;
	printf("cima: %i\n", pila -> cima);
	return v;
}

void imprimirPlato(struct TPila *plato){
	for(int i = 3; i>0; i--){	
		if(i==3 && plato -> cima != 0)
			printf("   |   \n");
		if(plato -> cima >= i && plato -> cima != 0){
			//printf("%i\n", plato->tipo[i-1]);
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

/*void imprimirPlato(struct TPila *plato){
	for(int i = 3; i > 0; i--){
		if(plato->cima >= i && plato -> cima != 0){
			printf("%i\n", plato -> tipo[i-1]);
		} else {
			printf("0\n");
		}
	}
}*/

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

	struct TPila plato1, plato2, plato3;

	plato2.cima = 0;
	plato3.cima = 0;

	plato1.tipo[MAX];
	for(int i=0; i<MAX; i++)
	plato1.tipo[i] = MAX-i;
	plato1.cima = 3;
	//printf(" %i\n%i\n%i\n", plato1.tipo[2], plato1.tipo[1], plato1.tipo[0]);	
	
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
						if(nfrom = 2){
							realizarCambio(&plato1, &plato2);
						}else if(nfrom =3){
							realizarCambio(&plato1, &plato3);
						
						}
					case 2: 
						if(nfrom = 1){
							realizarCambio(&plato2, &plato1);
						}else if(nfrom = 3){
							realizarCambio(&plato2, &plato1);
						}
					break;
					case 3:
						if(nfrom = 1){
							realizarCambio(&plato3, &plato1);
						} else if (nfrom = 2){
							realizarCambio(&plato3, &plato2);
						}
				
				}			
			}

			comprobarMov = 0;
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


	}

	return EXIT_SUCCESS;
}

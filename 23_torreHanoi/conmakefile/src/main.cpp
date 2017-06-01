//		------ Torre Hanoi ------
//	---------------------------------------
//		     Realizado por:
//	    https://github.com/alexgcr33
//	    https://github.com/GuillermoGomezdr
//	---------------------------------------
//		-------------------------



#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#include "hanoi.h"

//#define MAX 3

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

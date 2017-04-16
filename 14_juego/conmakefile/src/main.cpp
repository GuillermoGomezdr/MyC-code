#include <stdio.h>
#include <stdlib.h>

#include "4raya.h"

#define N 5

int main () {

	char tablero[N][N];
	int game = 1;
	int columna;

	char ficha = 'x';

	for (int i = 0; i < N; i++)
		for(int o = 0; o < N; o++)
			tablero[i][o] =' ';

	system("clear");
	
	while(game == 1){		
		imprimirTablero(tablero);					
		printf("Elige la columna en la que tirar la ficha:");
		scanf(" %i", &columna);
		columna -= 1;
		
		system("clear");

		if(columna >= N || tablero[0][columna] != ' '){
			printf("Te has salido del tablero, introduce de nuevo una columna válida.\n");
		} else if (columna < N){
			for(int i = 0, recorrerArray = 1; i < N && recorrerArray == 1; i++){
				if(tablero[i+1][columna] != ' ' && tablero[i][columna] == ' '){
					tablero[i][columna] = ficha;
					recorrerArray = 0;
				}
			}
	
		game = comprobarGanador(ficha, tablero);
	
		if(ficha == 'x')
			ficha = 'o';
		else if(ficha == 'o')
			ficha = 'x';	
		}	

	}

	return EXIT_SUCCESS;
}

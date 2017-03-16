#include <stdio.h>
#include <stdlib.h>

#define N 5

int main () {

	char tablero[N][N];
	int game = 1;
	int columna;

	char ficha = 'x';

	for (int i = 0; i < N; i++)
		for(int o = 0; o < N; o++)
			tablero[i][o] =' ';


	while(game == 1){		
		printf("Elige la columna en la que tirar la ficha:");
		scanf(" %i", &columna);
		columna -= 1;
		if(columna >= N || tablero[0][columna] != ' '){
			printf("Te has salido del tablero, introduce de nuevo una columna válida\n");
		} else if (columna < N){
			for(int i = 0, recorrerArray = 1; i < N && recorrerArray == 1; i++){
				if(tablero[i+1][columna] != ' ' && tablero[i][columna] == ' '){
					tablero[i][columna] = ficha;
					recorrerArray = 0;
				}
			}
			for (int i = 0; i < N; i++){
				for(int o = 0; o < N; o++){
					printf(" %c|", tablero[i][o]);
				}
				printf("\n");
			}
		if(ficha == 'x')
			ficha = 'o';
		else if(ficha == 'o')
			ficha = 'x';	
		}	
	}

	return EXIT_SUCCESS;
}

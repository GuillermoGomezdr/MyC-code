#include <stdio.h>
#include <stdlib.h>

#define N 5


int comprobarGanador(char cg_ficha, char cg_tablero[N][N]){
	for (int i = 0; i < N; i++){
		for(int o = 0; o < N; o++){
			if(cg_tablero[i][o] == cg_ficha){		
				if(cg_tablero[i+1][o] == cg_ficha && 
				   cg_tablero[i+2][o] == cg_ficha && 
				   cg_tablero[i+3][o] == cg_ficha){
				
					printf("¡El jugador %c ha hecho 4 en raya!\n", cg_ficha);
					return 0;

				} else if(cg_tablero[i][o+1] == cg_ficha && 
				   cg_tablero[i][o+2] == cg_ficha && 
				   cg_tablero[i][o+3] == cg_ficha){
				
					printf("¡El jugador %c ha hecho 4 en raya!\n", cg_ficha);
					return 0;

				} else if(cg_tablero[i-1][o+1] == cg_ficha && 
				   cg_tablero[i-2][o+2] == cg_ficha && 
				   cg_tablero[i-3][o+3] == cg_ficha){
				
					printf("¡El jugador %c ha hecho 4 en raya!\n", cg_ficha);
					return 0;
				
				} else if(cg_tablero[i+1][o+1] == cg_ficha && 
				   cg_tablero[i+2][o+2] == cg_ficha && 
				   cg_tablero[i+3][o+3] == cg_ficha){
				
					printf("D¡El jugador %c ha hecho 4 en raya!\n", cg_ficha);
					return 0;
					
				}
			}
		}
	}
	return 1;	
}


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
		
		game = comprobarGanador(ficha, tablero);
	
		if(ficha == 'x')
			ficha = 'o';
		else if(ficha == 'o')
			ficha = 'x';	
		}	

	}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

#include "4raya.h"

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


void imprimirTablero(char tablero[N][N]){
	for (int i = 0; i < N; i++){
		for(int o = 0; o < N; o++){
			printf(" %c|", tablero[i][o]);
		}
		printf("\n");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_P 10 	//Máximo de planetas.


int comprobarTiempo (int origen, int destinoFinal, int tm, int tct[MAX_P][MAX_P]){
	int tp = 0; 			//Tiempo prueba.

	for(int i = 0; i < MAX_P; i++){
		if(tct[origen][i] != 0 && tm > tp){
			if(i == destinoFinal)
				return tp + tct[origen][i];
			else
				tp += comprobarTiempo(i, destinoFinal, tm, tct);
			//return tp;
		}
	}
}


int main () {
	
	int tct[MAX_P][MAX_P];		//Cada planeta a cual puede viajar y sus tiempos de trayecto (nombre = trayector con tiempo).

	bzero(&tct, sizeof(tct));
	tct[0][1] = 5;
	tct[0][9] = 4;
	tct[1][0] = 5;
	tct[1][2] = 4;
	tct[1][3] = 5;
	tct[1][4] = 6;
	tct[2][1] = 4;
	tct[2][3] = 3;
	tct[2][4] = 3;
	tct[3][1] = 5;
	tct[3][2] = 3;
	tct[3][4] = 10;
	tct[3][8] = 3;
	tct[4][1] = 6;
	tct[4][2] = 3;
	tct[4][3] = 10;
	tct[4][5] = 3;
	tct[4][7] = 5;
	tct[5][4] = 3;
	tct[5][6] = 1;
	tct[6][5] = 1;
	tct[7][4] = 5;
	tct[7][8] = 2;
	tct[7][9] = 4;
	tct[8][3] = 3;
	tct[8][7] = 2;
	tct[9][0] = 4;
	tct[9][7] = 4;


	int origenInicial, destinoFinal;
	int pv[MAX_P];			//Planetas visitados
	int tm = 100;			//Tiempo menor. Se inicializa a una cantidad desorbitada.

	printf("Elige el planeta de Origen:\n");
	scanf("%i", &origenInicial);

	printf("Elige el planeta de Destino:\n");
	scanf("%i", &destinoFinal);

	if(origenInicial == destinoFinal){
		printf("El Origen y el destino son el mismo, por lo que el tiempo que tarda en llegar hasta el es de 0 horas, y solo pasa por el planeta %i.\n", origenInicial);
		return EXIT_SUCCESS;
	}

	tm = comprobarTiempo(origenInicial, destinoFinal, tm, tct);
	printf("El tiempo mínimo para viajar del planeta %i al %i es de %i horas.\n", origenInicial, destinoFinal, tm);	

	return EXIT_SUCCESS;
}

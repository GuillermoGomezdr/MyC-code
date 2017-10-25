#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_P 5 	//Máximo de planetas.


int comprobarTiempo (int origen, int destinoFinal, int tm, int tp, int tct[MAX_P][MAX_P], int pv[MAX_P], int numP){
	//int tp = 0; 			//Tiempo prueba.
	int pr = 0;			//Planeta recorrido. Actúa como booleano para no pasar por los mismos planetas varias veces.

	pv[numP] = origen;

	for(int i = 0; i < MAX_P; i++){
		printf("tct[%i][%i] == %i\n", origen, i, tct[origen][i]);
		for(int j = 0; j < MAX_P; j++){
			if(pv[j] == i){
				pr = 1;
				printf("Destino no puede ser %i.\n", i);
			}
		}
		if(pr == 0 && tct[origen][i] != 0 && tm > tp){
			if(i == destinoFinal){
				tp =+ tct[origen][i];
				if(tp < tm)
					tm = tp;
			}else{
				//Aqui va la recursividad. Lo difícil.
					
			}
		} else {printf("No vale.\n");}
		pr = 0;
		//return tp;
	}
	printf("El tiempo mínimo para viajar del planeta %i al %i es de %i horas.\n", pv[0], destinoFinal, tm);	
}


int main () {
	
	int tct[MAX_P][MAX_P] = 
	{{0, 3, 0, 5, 1},
	{3, 0, 4, 0, 2},
	{0, 4, 0, 1, 10},
	{5, 0, 1, 0, 8},
	{1, 2, 10, 8, 0}};

	int origenInicial, destinoFinal;
	int pv[MAX_P]=			//Planetas visitados
	{11, 11, 11, 11, 11};
	int tm = 100;			//Tiempo menor. Se inicializa a una cantidad desorbitada.

	printf("Elige el planeta de Origen:\n");
	scanf("%i", &origenInicial);

	printf("Elige el planeta de Destino:\n");
	scanf("%i", &destinoFinal);

	if(origenInicial == destinoFinal){
		printf("El Origen y el destino son el mismo, por lo que el tiempo que tarda en llegar hasta el es de 0 horas, y solo pasa por el planeta %i.\n", origenInicial);
		return EXIT_SUCCESS;
	}

	comprobarTiempo(origenInicial, destinoFinal, tm, 0, tct, pv, 0);
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_P 10	//Máximo de planetas.


struct TPlanet{
	int trayectos[MAX_P];		// Planetas a los que se puede desplazar.
	int tiempos[MAX_P];		// Tiempos que tarda en viajar a cada planeta.
	int vFinal;
	int vTemporal;
};


int tiempoHaciaOrigen(int tray[], int origen){
	for(int i = 0; i < MAX_P; i++){
		if(tray[i] == origen)
			return i;
	}

	return MAX_P-1;
}

int main () {
	
	struct TPlanet pA, pB, pC, pD, pE;	
	struct TPlanet p[MAX_P] = {pA, pB, pC, pD, pE};
	
	for(int i = 0; i < MAX_P; i++){
		for(int j = 0; j < MAX_P; j++){
			p[i].trayectos[j] = -1;
			p[i].tiempos[j] = -1;
		}
		p[i].vFinal = -1;
		p[i].vTemporal = 100;
	};

	//pA
	p[0].trayectos[0] = 1;
	p[0].trayectos[1] = 9;

	p[0].tiempos[0] = 5;
	p[0].tiempos[1] = 4;

	//pB
	p[1].trayectos[0] = 0;
	p[1].trayectos[1] = 2;
	p[1].trayectos[2] = 3;
	p[1].trayectos[3] = 4;

	p[1].tiempos[0] = 5;
	p[1].tiempos[1] = 4;
	p[1].tiempos[2] = 5;
	p[1].tiempos[3] = 6;

	//pC
	p[2].trayectos[0] = 1;
	p[2].trayectos[1] = 3;
	p[2].trayectos[2] = 4;

	p[2].tiempos[0] = 4;
	p[2].tiempos[1] = 3;
	p[2].tiempos[2] = 3;

	//pD
	p[3].trayectos[0] = 1;
	p[3].trayectos[1] = 2;
	p[3].trayectos[2] = 4;
	p[3].trayectos[3] = 8;

	p[3].tiempos[0] = 5;
	p[3].tiempos[1] = 3;
	p[3].tiempos[2] = 10;
	p[3].tiempos[3] = 3;

	//pE
	p[4].trayectos[0] = 1;
	p[4].trayectos[1] = 2;
	p[4].trayectos[2] = 3;
	p[4].trayectos[3] = 5;
	p[4].trayectos[4] = 7;

	p[4].tiempos[0] = 6;
	p[4].tiempos[1] = 3;
	p[4].tiempos[2] = 10;
	p[4].tiempos[3] = 3;
	p[4].tiempos[4] = 5;

	//pF
	p[5].trayectos[0] = 4;
	p[5].trayectos[1] = 6;

	p[5].tiempos[0] = 3;
	p[5].tiempos[1] = 1;

	//pG
	p[6].trayectos[0] = 5;
	
	p[6].tiempos[0] = 1;

	//pH
	p[7].trayectos[0] = 4;
	p[7].trayectos[1] = 8;
	p[7].trayectos[2] = 9;

	p[7].tiempos[0] = 5;
	p[7].tiempos[1] = 2;
	p[7].tiempos[2] = 4;

	//pI
	p[8].trayectos[0] = 3;
	p[8].trayectos[1] = 7;	

	p[8].tiempos[0] = 3;
	p[8].tiempos[1] = 2;	

	//pJ
	p[9].trayectos[0] = 0;
	p[9].trayectos[1] = 7;

	p[9].tiempos[0] = 4;
	p[9].tiempos[1] = 4;	

	//Programa
	int origenInicial, destinoFinal;
	int origen, destino;
	int tAcumulado = 0;			// Tiempo Acumulado en trayecto.

	printf("Elige el planeta de Origen:\n");
	scanf("%i", &origenInicial);

	printf("Elige el planeta de Destino:\n");
	scanf("%i", &destinoFinal);

	if(origenInicial == destinoFinal){
		printf("El Origen y el destino son el mismo, por lo que el tiempo que tarda en llegar hasta el es de 0 horas, y solo pasa por el planeta %i.\n", origenInicial);
		return EXIT_SUCCESS;
	}

	// Averiguamos los tiempos.
	origen = origenInicial;
	p[origen].vTemporal = 0;
	p[origen].vFinal = 0;
	for(int i = 0; i < MAX_P; i++){
		for(int j = 0; j < MAX_P; j++){
			if (p[p[origen].trayectos[j]].vFinal < 0 && (tAcumulado + p[origen].tiempos[j]) < p[p[origen].trayectos[j]].vTemporal){
				p[p[origen].trayectos[j]].vTemporal = tAcumulado + p[origen].tiempos[j];
				//printf("Entra en %i.\n", p[origen].trayectos[j]);
			}
		}
		int vTemporalMenor = -1;
		for(int j = 0; j < MAX_P; j++){
			if(vTemporalMenor == -1 && p[j].vFinal < 0)
				vTemporalMenor = j;
			else if(p[vTemporalMenor].vTemporal > p[j].vTemporal && p[j].vFinal < 0)
				vTemporalMenor = j;
		}
		p[vTemporalMenor].vFinal = p[vTemporalMenor].vTemporal;
		tAcumulado = p[vTemporalMenor].vFinal;
		origen = vTemporalMenor;
		
		/*
		for(int j = 0; j < MAX_P; j++){
			printf("vTemporal de %i en paso %i es de: %i.\n", j, i, p[j].vTemporal);
		
		}
		printf("\n\n");*/
	}


			
	for(int i = 0; i < MAX_P; i++){
		printf("La vFinal de %i es: %i.\n", i, p[i].vFinal);
		//printf("La vTemporal de %i es: %i.\n", i, p[i].vTemporal);
	}
	printf("\n\n");

	
	//Resultado de averiguar Tiempos:
	printf("El tiempo mínimo para viajar desde %i hasta %i es de: %i h.\n", origenInicial, destinoFinal, p[destinoFinal].vFinal);

	//Averiguamos el recorrido.	
	tAcumulado = p[destinoFinal].vFinal;			//Igualamos a valor Final (tiempo).
	origen = destinoFinal;					//Ahora haremos el recorrido a la inversa para averiguar los planetas por los que pasamos, así que igualamos el origen al destino final.


	printf("Antes de llegar al planeta %i...\n", destinoFinal);	
	while(tAcumulado > 0){
		int seguirBuscando = 1;
		for(int i = 0; i < MAX_P; i++){
			if(tAcumulado - p[p[origen].trayectos[i]].tiempos[tiempoHaciaOrigen(p[p[origen].trayectos[i]].trayectos, origen)] == p[p[origen].trayectos[i]].vFinal
			   && seguirBuscando == 1){
				tAcumulado = p[p[origen].trayectos[i]].vFinal;
				origen = p[origen].trayectos[i];

				if(origen == origenInicial)
					printf("... Sale del planeta %i.\n", origen);
				else
					printf("... Pasa por el planeta %i..\n", origen);

				seguirBuscando = 0;
			}		
		}
	}
	

	return EXIT_SUCCESS;
}

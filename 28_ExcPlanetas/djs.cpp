#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_P 5 	//Máximo de planetas.


struct TPlanet{
	int tof;			// ¿Estado temporal (0) o final (1)?
	int trayectos[MAX_P];		// Planetas a los que se puede desplazar.
	int tiempos[MAX_P];		// Tiempos que tarda en viajar a cada planeta.
	int vFinal;
	int vTemporal;
};


int main () {
	
	struct TPlanet pA, pB, pC, pD, pE;	
	struct TPlanet p[MAX_P] = {pA, pB, pC, pD, pE};
	
	for(int i = 0; i < MAX_P; i++){
		p[i].tof = 0;
		bzero(&p[i].trayectos, sizeof(p[i].trayectos));
		bzero(&p[i].tiempos, sizeof(p[i].tiempos));
		p[i].vFinal = -1;
		p[i].vTemporal = 100;
	};

	//pA
	p[0].trayectos[0] = 1;
	p[0].trayectos[1] = 3;
	p[0].trayectos[2] = 4;

	p[0].tiempos[0] = 3;
	p[0].tiempos[1] = 5;
	p[0].tiempos[2] = 1;

	//pB
	p[1].trayectos[0] = 0;
	p[1].trayectos[1] = 2;
	p[1].trayectos[2] = 4;

	p[1].tiempos[0] = 3;
	p[1].tiempos[1] = 4;
	p[1].tiempos[2] = 2;

	//pC
	p[2].trayectos[0] = 1;
	p[2].trayectos[1] = 3;
	p[2].trayectos[2] = 4;

	p[2].tiempos[1] = 4;
	p[2].tiempos[2] = 1;
	p[2].tiempos[3] = 10;

	//pD
	p[3].trayectos[0] = 0;
	p[3].trayectos[1] = 2;
	p[3].trayectos[2] = 4;

	p[3].tiempos[0] = 5;
	p[3].tiempos[1] = 1;
	p[3].tiempos[1] = 8;

	//pE
	p[4].trayectos[0] = 0;
	p[4].trayectos[1] = 1;
	p[4].trayectos[2] = 2;
	p[4].trayectos[3] = 3;

	p[4].tiempos[0] = 1;
	p[4].tiempos[1] = 2;
	p[4].tiempos[2] = 10;
	p[4].tiempos[3] = 8;



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

	origen = origenInicial;
	p[origen].vTemporal = 0;
	p[origen].vFinal = 0;
	p[origen].tof = 1;
	for(int i = 0; i < MAX_P; i++){
		for(int j = 0; j < MAX_P; j++){
			if (p[p[origen].trayectos[j]].vFinal < 0 && (tAcumulado + p[origen].tiempos[j]) < p[p[origen].trayectos[j]].vTemporal){
				p[p[origen].trayectos[j]].vTemporal = tAcumulado + p[origen].tiempos[j];
				
				printf("Entra.\n");
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
		tAcumulado += p[vTemporalMenor].vFinal;
		origen = vTemporalMenor;

		printf("El vTemporal de 2 en el paso %i es de: %i.\n", i, p[2].vTemporal);
	}


		
	for(int i = 0; i < MAX_P; i++){
		printf("La vFinal de %i es: %i.\n", i, p[i].vFinal);
		printf("La vTemporal de %i es: %i.\n", i, p[i].vTemporal);
	}


	return EXIT_SUCCESS;
}

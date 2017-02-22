#include <stdio.h>
#include <stdlib.h>

#define DELTA 0.05
#define g 9.8

int main () {
	
	double Vx = 0;

	printf("Introduzca una velocidad inicial:\n");
	scanf(" %lf", &Vx);

	double Vy = Vx, PosX = 0, PosY = 0;

	for (double t = DELTA; PosY >= 0; t+= DELTA){
		Vy = Vx -g*t;
		PosX += Vx*t;
		PosY += Vy*t;

		printf("En el segunto %.2lf la posición es (%.2lf,%.2lf) con velocidad %.2lf m/s.\n", t, PosX, PosY, Vy);
	}

	return EXIT_SUCCESS;
}

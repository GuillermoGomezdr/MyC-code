#include <stdio.h>
#include <stdlib.h>

#define DELTA 0.01
#define g 9.8

int main () {
	
	double Vx = 0;

	printf("Introduzca una velocidad inicial:\n");
	scanf(" %lf", &Vx);

	double Vy = Vx, PosX = 0, PosY = 0;
	int inicio = 1;	

	for (double t = 0.05; PosY > 0 || inicio == 1; t+= 0.05){
		Vy = Vx -g*t;
		PosX += Vx;
		PosY += Vy;

		printf("En el segunto %.1lf la posición es (%.2lf,%.2lf)\n", t, PosX, PosY);

		if(inicio == 1)
			inicio = 0;
	}

	return EXIT_SUCCESS;
}

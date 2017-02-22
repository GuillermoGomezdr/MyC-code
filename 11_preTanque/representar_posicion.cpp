#include <stdio.h>
#include <stdlib.h>

#define DELTA 0.01
#define g 9.8

int main () {
	
	double Vx = 0;

	printf("Introduzca una velocidad inicial:\n");
	scanf(" %lf", &Vx);

	double Vy = Vx, PosX = 0, PosY = 0;
	int inicio = 1, guardarX = 0, guardarY = 0;
	
	char dibujo[100][100];
	for(int i = 0; i < 100; i++){
		for(int o = 0; o < 100; o++)
			dibujo[i][o] = ' ';
	}
	

	for (double t = 0.05; PosY > 0 || inicio == 1; t+= 0.05){
		Vy = Vx -g*t;
		PosX += Vx;
		PosY += Vy;

		printf("En el segunto %.1lf la posición es (%.2lf,%.2lf)\n", t, PosX, PosY);
		
		guardarX = PosX/10;
		guardarY =100 -PosY;
		if(PosY > 0)
			dibujo[guardarY][guardarX] = 'O';

		if(inicio == 1)
			inicio = 0;
	}

	for(int i = 0; i < 100; i++){
		for(int o = 0; o < 100; o++)
			printf(" %c", dibujo[i][o]);
		printf("\n");
	}
	

	return EXIT_SUCCESS;
}

//Esto no funciona... 
//			... Y ni idea del motivo.

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h> //Para el usleep

#define g 9.8

#define centroX 20
#define centroY 20

#define DELTA 0.1


struct TCoordenadas {
	double x;
	double y;
};

int main () {
	
	double t = 0;
	
	struct TCoordenadas a = { 0.0, -g}, 
			    v = { 5.0, 10.0},
			    s = { 0.0, 0.0};


	initscr();	
	for(t = 0; s.y >= 0; t+= DELTA){
		v.y += a.y * DELTA;
		s.y += v.y * DELTA;

		v.x += a.x * DELTA;
		s.x += v.x * DELTA;
		
		clear();
		mvprintw(centroY-s.y, centroX+s.x, "o");
		refresh();
		usleep(100000);
	}

	usleep(2000000);
	endwin();

	return EXIT_SUCCESS; 
}

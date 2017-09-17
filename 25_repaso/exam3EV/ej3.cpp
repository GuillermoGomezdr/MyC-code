#include <stdio.h>
#include <stdlib.h>


/*
Escribe un programa que maneje un array de struct Nave. Cada nave tiene que tener los
campos vida (entero de 0 a 100), p (coordenadas de posición con los campos x e y),
y avatar (un carácter que representará a la nave).
	I. La función main tiene dos partes: La primera en la que se crean todas las naves con
	coordenadas y dibujo aleatorio y 100 de vida: void crear_nave(struct Nave*). Esta
	función será llamada una vez por cada nave e inicializar.
	
	II. La segunda parte es el bucle de juego que se repite indefinidamente. Dentro de él se
	hacen las llamadas a struct Nave mover_nave(struct Nave) (que devuelve una nave
	con las coordenadas e incremente en 1 respecto a la coordenada y de una nave 
	que se le pase -fíjate que es un paso por valor-), y la llamada a pintar naves: 
	void pintar_naves(struct Nave[]) que pintará todas las naves. (4 puntos)
*/

//En proceso


#include <string.h>
#define N 100

struct Nave{
	char avatar;
	int coord[N];
	int vida;
};

void crearNave (struct Nave* naveCreada){
	Nave* n;
	n -> vida = 100;
	n -> coord[n -> coord[0]] = rand()%N;
	n -> coord[n -> coord[1]] = rand()%N;
	n -> avatar = itoa(rand()%N);
	naveCreada = *n;
}

struct Nave mover_nave(struct Nave naveMov){
	naveMov.x++;
	naveMov.y++;
	return naveMov;
}

void pintar_naves(struct Nave navePintar){
	for(int i= 0; i< navePintar.y; i++){
		printf("\n");
	}
	for(int i = 0; i< navePintar.x; i++){
		printf(" ");
	}
	printf("%c\n", navePintar.avatar;
}

int main () {
	
	return EXIT_SUCCESS;
}

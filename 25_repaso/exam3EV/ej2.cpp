#include <stdio.h>
#include <stdlib.h>


/*
Desarrolla un programa que permita al usuario introducir un '+', un '-', o un ' ' (espacio).
El '+' selecciona (pero no ejecuta) el modo incrementar de 1 en 1 (a través de la función
void incrementa (int *nivel) ). El '-' seleccionará la función decrementa (con la misma
firma que la anterior). Imprimirá el valor de la variable nivel cada vez que se introduzca ' '
después de haber ejecutado la función actualmente seleccionada. (3 puntos)
*/


// Done :D

void incrementa (int* nivel){
	(* nivel)++;
}

void decrementa (int* nivel){
	(* nivel)--;
}

int main () {
	
	int nivel = 0;
	int numFuncion;
	int introducido;
	
	printf("Introducir '+' selecciona el modo incrementar.\n Introducir '-' selecciona el modo decremento.\n Introducir un espacio ejecuta el modo seleccionado y mostrará el número resultante.\n");

	void (*funciones[2]) (int* nivel){
		&incrementa,
		&decrementa
	};

	while(1){
		scanf("%c", &introducido);
		
		if(introducido == '+')
			numFuncion = 0;
		else if(introducido == '-')
			numFuncion = 1;
		else if(introducido == ' '){
			(*funciones[numFuncion])(&nivel);
			printf("nivel = %i \n!", nivel);
		}
	}

	return EXIT_SUCCESS;
}

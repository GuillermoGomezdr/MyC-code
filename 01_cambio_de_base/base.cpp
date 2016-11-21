
#include <stdio.h>
#include <stdlib.h>

int main () {
	int numero;

	printf("Introduce un número: ");
	scanf(" %i", &numero); 
	//Aquí recibiremos la información del teclado. 
	//Dejaremos un espacio para eliminar todos los espacios que nos introduzca el usuario.
	//el %i le indicamos a la tubería que lea un entero. 
	//el &numero averigua la dirección de la variable numero, y lo coloca allí.
	
	//Hacer: 
	//	Imprimiremos numero % 2
	//	Numero = numero /2
	//Mientras numero /2 > 0
	
       	do {
		printf("%i", numero % 2);
		numero /= 2;
	} while (numero>0);	

	printf("\n");

	return EXIT_SUCCESS;
}

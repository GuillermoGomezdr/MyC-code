#include <stdio.h>
#include <stdlib.h>

int main () {
 	
	int numero = 12345678;
	char dni[8];

	//Vamos a querer pasar un entero a una cadena de caracteres.
	sprintf(dni, "%i", numero);
	
	//Ahora haré un bucle para comprobar que al recorrer el array de dni, haya en cada parte el 
	//código Ascii correspondiente.	
	for(int i=0; i<7; i++){
		printf("%i\n", dni[i]);
	}

	return EXIT_SUCCESS;
}

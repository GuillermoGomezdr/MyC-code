#include <stdio.h>
#include <stdlib.h>

int main () {

	//No entiendo muy bien el enunciado, pero voy a probar a ver.

	char dni[9] = "00000000";
	printf("Introduce el número de tu dni\n");
	scanf(" %s", dni);
	int convertido;

	convertido = atoi(dni);

	printf(" El resultado final es: %i\n", convertido);
	/*for(int i = 0; i < sizeof(dni)/sizeof(char)-1; i++){
		printf(" %i", dni[i]);	
	}*/
	return EXIT_SUCCESS;
}

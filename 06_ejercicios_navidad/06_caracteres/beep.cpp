#include <stdio.h>
#include <stdlib.h>

int main () {

	//Misa no entender como hacer esto. Lo dejo en pendientes.

	//for(int i = 0; i<100; i++)
	//printf("%c", 7);
	
	char cadena[] = "Patata";

	for(int i = 0; i < sizeof(cadena)/sizeof(char)-1; i++){
	printf("\a");
	//printf(" %c", cadena[i]);
	}
	
	return EXIT_SUCCESS;
}

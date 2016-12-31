#include <stdio.h>
#include <stdlib.h>

int main () {

	char palabra[] = "roma";
	int longitud = sizeof(palabra)/sizeof(char) - 1;
	char invertido[4];
	
	for(int i = 0; i < sizeof(palabra)/sizeof(char) - 1; i++){
		invertido[longitud] = palabra[i];
		longitud --;
		

	}
			
	printf(" %s\n", invertido);
	return EXIT_SUCCESS;
}

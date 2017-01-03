#include <stdio.h>
#include <stdlib.h>

int main () {
	int numIntroducido, suma = 0;

	printf("Introduce un número:\n");
	scanf(" %i", &numIntroducido);

	for( int i = 1; i < numIntroducido; i++){
		if(numIntroducido%i == 0)
			suma += i;
	}	

	if(numIntroducido == suma){
		printf("El número introducido es perfecto.\n");
	} else {
		printf("El número introducido no es perfecto.\n");
	}
	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
	int sumTotal = 0, nIntroducido, media;
	
	printf("Introduce 10 números para realizar su media: \n");	

	for(int i = 0; i < 10; i++){
		printf("Número %i:", i+1);
		scanf(" %i", &nIntroducido);

		sumTotal += nIntroducido;
	}	

	media = sumTotal/10;
	printf("Tu media será de: %i.\n", media);

	return EXIT_SUCCESS;
}

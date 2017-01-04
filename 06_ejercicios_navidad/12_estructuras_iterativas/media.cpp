#include <stdio.h>
#include <stdlib.h>

int main () {
	int sumTotal = 0, nIntroducido = 0, media, contador = 0;
	
	printf("Introduce las notas de la clase para realizar su media (para parar de introducir notas, escriba un número negativo): \n");	

	while (nIntroducido > -1){
		printf("%iº nota:", contador+1);
		scanf(" %i", &nIntroducido);
		sumTotal += nIntroducido;
		
		if(nIntroducido > -1)
			contador++;
	}	


	media = sumTotal/contador;
	printf("Tu media será de: %i.\n", media);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
	int nIntroducido = 0, nMenor = 0;

	printf("Introduce 10 números:\n");
	for(int i = 0; i < 10; i++){
		printf("Número %i:", i+1);		
		scanf(" %i", &nIntroducido);
		
		if( i == 0)
			nMenor = nIntroducido;		

		if(nIntroducido < nMenor)
			nMenor = nIntroducido;
	} 
	
	printf("El menor número introducido es el %i.\n", nMenor);

	return EXIT_SUCCESS;
}

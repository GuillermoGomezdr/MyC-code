#include <stdio.h>
#include <stdlib.h>

int main () {
	int nIntroducido = 0, nMayor = 0;

	printf("Introduce 10 números:\n");
	for(int i = 0; i < 10; i++){
		printf("Número %i:", i+1);		
		scanf(" %i", &nIntroducido);

		if(nIntroducido > nMayor)
			nMayor = nIntroducido;
	} 
	
	printf("El número mayor introducido es el %i.\n", nMayor);

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 0x200

	const char *palabra[] = {"patata", "amalgama", "narcolepsia",
	"suricato", "parguela", "shuriken", "panenteismo", "nemesis", 
	"antitesis", "origen","artropodo", "cacatua", "distopia", 
	"catarsis", "sinestesia", "clemencia", "coordialidad", "plebiscito",
	"concatenar", "sombrio", "cantera", "soliloquio", "reminiscencia",
	"licantropo", "sintetico", "lucrativo", "niveo", "marcial",
	"nipon", "adoctrinamiento", "extinto", "impersonal", NULL};

int main () {

	char adivinado[N], dichas[N];
	const char *elegida;
	char letra;
	int aleatorio, nLetras = 0,cDichas = 0, cErrores = 0;

	//Primera parte.
	srand(time(NULL));
	aleatorio = rand() % (sizeof(palabra)/sizeof(char *)-1);		
	elegida = palabra[aleatorio];

	bzero(adivinado, N);
	bzero(dichas, N);
	nLetras = strlen(elegida);
	for(int i=0; i<nLetras; i++)
		adivinado[i]='_';

	//Segunda parte.
	printf(" %s\n", adivinado);
	while(nLetras >	0 && cErrores < 5){
		printf("Introduzca una letra: ");
		scanf(" %c", &letra);

		int prevnLetras = nLetras;
		for(int i=0; i<strlen(elegida); i++){
			if(letra == elegida[i]){
				adivinado[i] = letra;
				nLetras --;
			}
		}
		
		dichas[cDichas++] = letra;

		if(prevnLetras == nLetras){
			printf("¡Error!\n");
			cErrores++;	
		}

		printf(" %s\n", adivinado);
		printf(" Fallos restantes: %i\n", 5-cErrores);
		printf(" Letras dichas: %s\n", dichas);
	}
	if(nLetras == 0)
		printf("\n ¡Enhorabuena!\n ¡Has ganado!\n");
	else if(cErrores == 5)
		printf("\n Oooooh... \n Has perdido...\n La palabra era: %s. \n Intentalo de nuevo.\n", elegida);
	return EXIT_SUCCESS;
}

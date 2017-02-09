#include <stdio.h>
#include <stdlib.h>

char menu(int num){
	switch(num){
		case 49: printf("Patata.\n");
			break;
		case 50: printf("2x3=6.\n");
			break;
		case 51: printf("Amor.\n");
			break;
		case 52: printf("Guillermo.\n");
			break;
		default: printf("Opción no válida.\n");
			break;
	}
	return 'a';
}

int main () {
	
	printf("Elige una opción:\n");
	printf(" 1. Mostrar la palabra secreta\n 2. Multiplicar 2x3\n 3. Mostrar Roma al revés.\n 4. Revelar el nombre de quien escribió esto.\n");
	printf("Introduce el número elegido: ");
	char opcion = menu(getchar());

	return EXIT_SUCCESS;
}

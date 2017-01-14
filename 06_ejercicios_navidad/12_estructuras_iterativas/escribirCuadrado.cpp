#include <stdio.h>
#include <stdlib.h>

int main () {

	int num;

	printf("Introduce el tamaño del que quieres que sea el cuadrado un asteriscos:\n");
	scanf(" %i", &num);

	for(int i = 0; i < num; i++){
		for(int o = 0; o < num; o++){
			printf("* ");
		}
		printf(" \n");
	}
	
	printf("\n");
	//printf("* * * * *\n* * * * *\n* * * * *\n* * * * *\n* * * * *\n");

	return EXIT_SUCCESS;
}

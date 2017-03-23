#include <stdio.h>
#include <stdlib.h>

#define Nx 10
#define Ny 4

struct TCoordenadas{
	int ejeX;
	int ejeY;
};

void imprimirCoordenadas(struct TCoordenadas x){

	for(int i = 0; i < Ny; i++){
		for(int o = 0; o < Nx; o++){
			if(i == 0 && o == 0)
				printf("┌");
			else if(i == 0 && o == Nx-1)
				printf("┐");
			else if(i == 0 && o%2 == 0)
				printf("┬");
			
			if(i == Ny && o == 0)
				printf("└");
			else if(i == Ny && o == Nx)
				printf("┘");
			else if(i == Ny && o%2 == 0)
				printf("┴");


			if(o&2!= 0)
				printf("─");
	
			if(i == 0 || i == Nx || i%2!=0)
				printf("|");
			

					
		}
	printf("\n");
	}

}

int main () {
	
	struct TCoordenadas coord = {0,0};

	printf("Introduce la posición en x:\n");
	//scanf(" %i", coord.ejeX);
	printf("Introduce la posición en y:\n");
	//scanf(" %i", coord.ejeY);

	imprimirCoordenadas(coord);	


	return EXIT_SUCCESS;
}

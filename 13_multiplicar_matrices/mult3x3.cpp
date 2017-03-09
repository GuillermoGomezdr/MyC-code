#include <stdio.h>
#include <stdlib.h>


#define dim1_m1 3
#define dim1_m2 3
#define dim2_m1 3
#define dim2_m2 3

int main () {
	int matriz1[dim1_m1][dim1_m2] = {{1, 2, 3}, {2, -3, 1}, {-4, 3, 2}};
	int matriz2[dim2_m1][dim2_m2] = {{7, 2, 5}, {1, 2, 4}, {-3, 2, 1}};
		
	int matrizResultado[dim1_m1][dim2_m2] ={{0, 0, 0}, {0, 0, 0}, {0, 0, 0}} ;
	

	
	
	if(dim1_m2 == dim2_m1){
		for(int i = 1; i <= dim1_m1; i++){
			for(int o = 1; o <= dim2_m2; o++){
				for(int k = 1; k <= dim2_m1; k++){
					matrizResultado[i][o] += matriz1[i][k] * matriz2[k][o];  
				}
			printf("%i ", matrizResultado[i][o]);
			}
			printf("\n");
		}
	}
		

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int triT [10][10];

	for(int i = 0; i < 10; i++){
		for(int o = 0; o < 10; o++){
			if(o != 9)
				triT[i][o] = 0;
			else
				triT[i][o] = 1;
		}
	}

	for(int i = 1; i < 10; i++){
		for(int o = 0; o < 9; o++){
			triT[i][o] = triT[i-1][o+1] + triT[i-1][o];
		}
	}

	for(int i = 0; i < 10; i++){
		for(int o = 0; o < 10; o++)
			printf(" %i", triT[i][o]);
		printf("\n");
	}
	
	
	return EXIT_SUCCESS;
}

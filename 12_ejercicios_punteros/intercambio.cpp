#include <stdio.h>
#include <stdlib.h>

#define N 7

int main () {
	
	int data[N] ={1, 2, 3, 4, 5, 6, 7};

	int *pi = data;
	int *pf = data+N-1;

	int contenedor = 0;

	for(int i = 0; *pi < *pf; i++){
		contenedor = *pi;
		data[i] = *pf;
		data[N-1-i] = contenedor;

		*pi ++;
		*pf --;
	}
	
	for(int i = 0; i<N; i++){
		printf(" nº%i es = %i\n", i+1, data[i]);
	}


	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define M 3
#define K 2
#define N 4

int main () {
		
	int A[M][K] = {{1,2},{2,-3},{-4,3}};
	int B[K][N] = {{7,2,5,-6},{1,2,4,-8}};
	int C[M][N];

	bzero(C, sizeof(C));	

	for(int i = 0; i < M; i++){
		for(int o = 0; o < N; o++){
			for(int u = 0; u < K; u++){
				C[i][o]+= A[i][u]*B[u][o];
			
			}
		printf(" %i", C[i][o]);
		}
	printf("\n");
	}

	return EXIT_SUCCESS;
}

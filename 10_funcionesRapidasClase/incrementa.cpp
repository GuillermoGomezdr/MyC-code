#include <stdio.h>
#include <stdlib.h>

void incrementa(int *num, int i){
	*num += i;
}

int main () {

	int a = 2, b = 5;

	incrementa(&a, 5);
	incrementa(&b, 3);
	incrementa(&a, -2);

	printf("a es:%i\nb es:%i\n", a, b);

	return EXIT_SUCCESS;
}

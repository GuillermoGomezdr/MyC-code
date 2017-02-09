#include <stdio.h>
#include <stdlib.h>

int multiplica(int num1, int num2){
	
	return num1*num2;
}

int main () {

	int a, b;
	
	a = getchar()-'0';
	b = getchar()-'0';

	printf(" %ix%i=%i\n", a, b,
	      	multiplica(a,b));
	
	printf(" %ix%i=%i\n",
		a = getchar()-'0',
		b = getchar()-'0',
		multiplica(a,b));

	return EXIT_SUCCESS;
}

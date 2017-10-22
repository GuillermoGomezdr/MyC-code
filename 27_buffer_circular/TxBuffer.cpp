#include <stdio.h>
#include <stdlib.h>

#define N 5
#define LONGITUD(x) ((x)-> summit - (x) -> head)

struct TBuffer{
	int data[N];
	int head;
	int summit;
};

void push(struct TBuffer *b, int d){
	if(LONGITUD(b) >=N)
		return;

	b-> data[(b->summit)%N] = d;
	b -> summit++;
}

int shift (struct TBuffer *b){ //Esto vendría siendo el pop
	int d = b -> data[(b -> head)%N];
	b -> head++;
	return d;
}

void peep(struct TBuffer b){
	for(int i = b.head; i < b.summit; i++)
		printf("%3i",b.data[i]);
	printf("/n");
}

int main () {
	int d;
	struct TBuffer buffer;
	buffer.head = 0;
	buffer.summit = 0;

	push(&buffer,d);
	d = shift(&buffer);

	peep(buffer);

	return EXIT_SUCCESS;
}

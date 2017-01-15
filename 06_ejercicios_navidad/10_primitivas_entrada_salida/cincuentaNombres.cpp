#include <stdio.h>
#include <stdlib.h>

int main () {

	char* nombres[] = {"Cú", "Sireh", "Cat", "Dante", "Evan", "Luna", "Lexy", "Lune", "Kareth", "Amerei", "Siss", "Kaith", "Irial", "Suerte", "Karma", "Mike", "Cuervo", "Amaury", "Axel", "Ronna", "Aira", "Shail", "Gemi", "Inis", "Annie", "Shoki", "Iska", "Al", "Kai", "Issei", "Sobra", "Gray", "Serelle", "Dororo", "Iska", "Alex", "Lariel", "Mark", "Talamur", "Rikka", "Yuuta", "Shiki", "Susuy", "Leaf", "Red", "Geo", "Arizu", "Ditsu", "Necro", "Zero", NULL};

	for(int i = 0; nombres[i] != NULL; i++)
		printf(" %i.- %s\n", i+1, nombres[i]);
	return EXIT_SUCCESS;
}

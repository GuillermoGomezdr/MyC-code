#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dlfcn.h>

void salir(const char *mssg){
	fprintf(stderr, "%s\n", mssg);
	exit(1);
}

void run(const char *mod, const char *funct){
	void *modulo = NULL;
	void (*fn)() = NULL;

	modulo = dlopen(mod, RTLD_LAZY);	
	
	if(!modulo)
		salir("No se ha encontrado el módulo");

	fn = (void (*)()) dlsym(modulo, funct);

	if(!fn)
		salir("No se ha encontrado la función");

	(*fn)();		

	dlclose(modulo);
}

int main () {
	run("./libhola.so", "greet");
	run("./libadios.so", "farewell");

	return EXIT_SUCCESS;
}

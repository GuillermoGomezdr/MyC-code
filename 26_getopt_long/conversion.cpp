#include <stdio.h>
#include <stdlib.h>

#include <math.h>

#include <getopt.h> //Librería que nos permitirá usar getopt_long
#define DEBUG(...) if (verbose) \
	fprintf(stderr, __VA_ARGS__);

const char* program_name;
int verbose = 0;

void print_usage(FILE* stream, int exit_code){
	fprintf(stream, "*Usage: %s \n", program_name);
	fprintf(stream,
		"This program converts from any base to any base.\n");
	exit(exit_code);
}

int convertTo(int base, int num, int elevadoA){
	if(num/base < 1)
		return num%base*pow(10, elevadoA++) + num/base*pow(10, elevadoA);
	return num%base*pow(10,elevadoA++) + convertTo(base, num/base, elevadoA);
}

int main (int argc, char* const argv[]) {
	int next_option;
	int output_base;
	int numConvertido = 0;

	const char* const short_options = "hb:v";
	const struct option long_options[] ={
		{"help",	0,	NULL,	'h'},
		{"base",	1,	NULL,	'b'},
		{"verbose",	0,	NULL,	'v'}
	};
	
	program_name = argv[0];

	do{
		next_option = getopt_long(argc, argv, short_options, long_options, NULL);
		switch(next_option){
			case 'h':
				print_usage(stdout, EXIT_SUCCESS);
				break;
			case 'b':
				output_base = atoi(optarg);
				DEBUG("Estableciendo la base de salida a %i\n", output_base);
				
				numConvertido = convertTo(output_base, atoi(argv[argc-1]), 0);	
				printf("El número %i, pasa a base %i, y da %i.\n",
					atoi(argv[argc-1]), output_base, numConvertido);
				
				break;
			case 'v':
				verbose = 1;
				break;
			case '?':
				print_usage(stderr, EXIT_FAILURE);
			case -1:
				break;
			default:
				abort();
		}
	}	
	while(next_option != -1);

	if(verbose)
		printf("Funcionando.\n");

	return EXIT_SUCCESS;
}

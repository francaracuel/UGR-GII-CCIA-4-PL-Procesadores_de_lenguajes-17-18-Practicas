////////////////////////////////////////////////////////////////////////////////
//
// Ismael Sánchez García
// Juan Manuel Fajardo Sarmiento
// Francisco Javier Caracuel Beltrán
//
// PL - Procesadores de Lenguajes - CCIA
//
// ETSIIT - UGR
//
// Curso 2017-2018
//
// main.c
//
// Fichero principal para iniciar el analizador
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;

int yyparse(void);

FILE *abrir_entrada(int argc, char *argv[]){

	FILE *f = NULL;

	if (argc > 1){

		f = fopen(argv[1], "r");

		if (f==NULL){

			fprintf(stderr, "fichero ´%s´ no encontrado\n", argv[1]);
			exit(1);

		}else{
			printf("\nLeyendo fichero ´%s´.\n\n", argv[1]);
		}

	}else{
		printf("\nLeyendo entrada estándar.\n\n");
	}

	return f;

}

int main( int argc, char *argv[1]){

	yyin = abrir_entrada(argc, argv);

	return yyparse();

}

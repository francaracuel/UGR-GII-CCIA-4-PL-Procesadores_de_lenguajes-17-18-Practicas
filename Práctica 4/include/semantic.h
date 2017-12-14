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
// semantico.h
//
// Archivo con las constantes necesarias para desarrollar el analizador
// semántico
//
////////////////////////////////////////////////////////////////////////////////

#ifndef SEMANTIC_H
#define SEMANTIC_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {
	MARCA,
	FUNCION,
	VARIABLE,
	PARAMETRO_FORMAL,
} tipoEntrada ;

typedef enum {
	ENTERO,
	FLOTANTE,
	CARACTER,
	BOOLEANO,
	DESCONOCIDO,
	NO_ASIGNADO
} dtipo ;

typedef struct {

	tipoEntrada entrada ;
	char *nombre ;
	dtipo tipoDato ;
	unsigned int parametros ;
	unsigned int dimensiones ;
	/* Tamaño Dimensión 1 */
	int TamDimen1 ;
	/* Tamaño Dimensión 2 */
	int TamDimen2 ;

} entradaTS ;



// Pila de la tabla de símbolos
typedef struct {
	// Atributo del símbolo (si tiene)
	int atrib ;
	// Nombre del lexema
	char *lexema ;
  	// Tipo del símbolo
	dtipo tipo ;

	//dimensiones de la matriz
	unsigned int numDim;
	int tamDim1;
	int tamDim2;
} atributos ;


#define YYSTYPE atributos
#define MAX_TS 500


unsigned int TOPE ;
unsigned int Subprog ; /* Tope de la pila */

// Indicador de comienzo de bloque de un subprog
entradaTS TS[MAX_TS] ;
/* A partir de ahora, cada símbolo tiene */
/* una estructura de tipo atributos */
/* Lista de funciones y procedimientos para manejo de la TS */



///////////////////////////FUNCIONES MANEJO TABLA SIMBOLOS////////////////
// Inserta una marca de bloque en la tabla de símbolos
void TS_InsertaMARCA();

// Quita una marca de bloque en la tabla de símbolos
void tsVaciarEntradas();

int TS_anadirEntrada(entradaTS ent);

///////////////////////////FUNCIONES IMPRESIÓN////////////////
void imprimeTS();

/* Fin de funciones y procedimientos para manejo de la TS */

#endif

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
// Archivo con las constantes necesarias para desarrollar la práctica
//
////////////////////////////////////////////////////////////////////////////////

typedef enum {
	MARCA = 0, 
	FUNCION, 
	VARIABLE, 
	PAR_FORMAL
} tEntrada;

typedef enum {
	NO_ASIG = 0, //NO ASIGNADO (PARA CUANDO AUN NO HEMOS DECLARADO EL TIPO DE LA VARIABLE)
	ENTERO, 
	REAL, 
	CARACTER, 
	BOOLEANO, 
	STRING, 
	MATRIZ, 
	DESC //DESCONOCIDO O ERRONEO
} tDato;

typedef struct {
	tEntrada entrada; //TIPO DE ENTRADA
	char *lexema;
	tDato tipoDato; //TIPO DE DATO
	int nParam; //NUMERO DE PARAMETROS
	
	//DIMENSIONES DE LA MATRIZ
	unsigned int numDim;
	int tamDim1;
	int tamDim2;
} entradaTS;
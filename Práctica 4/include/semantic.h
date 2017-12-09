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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

typedef struct {
	int atrib; //ATRIBUTOS (SI LOS TIENE)
	char *lexema;
	tDato tipo; //TIPO DE DATO

	//DIMENSIONES DE LA MATRIZ
	unsigned int numDim;
	int tamDim1;
	int tamDim2;
} atributos;

#define YYSTYPE atributos
#define MAX_ENTRADAS 500

extern long int TOPE;

extern entradaTS ts[MAX_ENTRADAS];
// Variable que almacena la linea actual por la cual se va analizando
extern int lineaActual;
//1 si estamos declarando 0 si estamos utilizando la variable
extern int declarVar;
// Variable que indica el comienzo de una declaracion de un subprograma o funcion
// 1 si estoy en cabec_subprog 0 si estoy en bloque
extern int subProg;
//Variable que indica si se estan declarando parametros formales dentro
//de la definicion de una funcion
extern int declarPar;
// Variable global para almacenar el tipo en las declaraciones
extern tDato tipoGlobal;
//Variable que cuenta el numero de parametros formales de una funcion
extern int numParam;
// Almacena el indice de la TS de la funcion que se esta analizando
extern int funcionActual;
extern int auxiliarAgregados;


/**
 * Indica si el atributo es un array o no
 */
int esArray(atributos e);

/**
 * Indica que si siendo arrays los dos entradaTS tienen el mismo tamanyo.
 */
int igualTam(atributos e1, atributos e2);

/**
 * Almacena en la variable global tipo el tipo de la variable
 */
int asignaTipoGlobal(atributos elem);




//------------  Funciones de manejo de la Tabla de Simbolos  ------------------------
/**
  * Inserta una entrada a la tabla de simbolos e incrementa el TOPE en 1
**/
int tsAddEntrada(entradaTS ent);

/**
  * Elimina el elemento TOPE de tabla de simbolos y decrementa el TOPE en 1
**/
int tsDelEntrada();

/**
 * Elimina de la tabla de simbolos todas las entradas hasta la ultima marca de inicio de bloque, tambien incluida
 */
void tsVaciarEntradas();

/**
  * Busca un identificador en la TS para comprobar que ha sido declarado
**/
int tsBuscarIdent(atributos elem);

/**
  * Busca una entrada dado su nombre:
  * Si la encuentra devuelve el indice donde se encuentra la entrada
  * Si no la encuentra devuelve -1
**/
int tsBuscarFuncion(atributos elem);

/**
 * Inserta un nuevo identificador en la tabla de simbolos
 */
void tsInsertaIdent(atributos elem);

/**
 * Inserta una marca de comienzo de un bloque
 */
void tsInsertaMarca();

/**
 * Inserta una entrada de subprograma en la tabla de simbolos
*/
void tsInsertaSubprog(atributos elem);

/**
 * Inserta una entrada de parametro formal de un subprograma en la tabla de simbolos
 */
void tsInsertaParamFormal(atributos elem);

/**
 * Actualiza el numero de parametros de la funcion que estamos declarando
 */
void tsActualizaNparam(atributos elem);




//------------  Funciones para las comprobaciones semanticas ------------------------
/**
 * Busca la entrada de tipo Funcion mas proxima desde el tope de la tabla de simbolos
 * y devuelve el indice
 */
int tsGetFuncionProxima();

/**
 * Comprobacion semantica de la sentencia de retorno.
 * Comprueba que el tipo de expresion es el mismo que el de la funcion
 * donde se encuentra
 */
void tsCompruebaRetorno(atributos expresion, atributos* retorno);

/**
 * Busca el identificador en la tabla de simbolos y lo rellena en el atributo de salida
 */
void tsGetIdent(atributos identificador, atributos* res);

/**
 * Comprobacion semantica de la operacion NOT
 */
void tsOpNot(atributos operador, atributos o, atributos* res);

/**
 * Comprobacion semantica de los operadores unarios + y -
 */
void tsOpSumResUnario(atributos operador, atributos o, atributos* res);

/**
 * Comprobacion semantica de las operaciones * y /
 */
void tsOpMulDiv(atributos o1, atributos operador, atributos o2, atributos* res);

/**
 * Comprobacion semantica de las operaciones || y XOR
 */
void tsOpOrXor(atributos o1, atributos operador, atributos o2, atributos* res);

/**
 * Comprobacion semantica de la operacion **
 */
void tsOpPot(atributos o1, atributos operador, atributos o2, atributos* res);

/**
 * Comprobacion semantica de las operaciones <, >, <= y >=
 */
void tsOpRel(atributos o1, atributos operador, atributos o2, atributos* res);

/**
 * Comprobacion semantica de las operaciones == y !=
 */
void tsOpIgual(atributos o1, atributos operador, atributos o2, atributos* res);

/**
 * Comprobacion semantica de las operaciones &&
 */
void tsOpAnd(atributos o1, atributos operador, atributos o2, atributos* res);

/**
 * Comprobacion semantica de las operaciones binarias + y -
 */
void tsOpSumRes(atributos o1, atributos operador, atributos o2, atributos* res);

/**
 * Comprobacion semantica de la llamada a subprograma
 */
void tsLlamadaFuncion(atributos identificador, atributos* res);

/**
 * Comprobacion semantica de cada parametro en una llamada a una funcion
 */
void tsCompruebaParametro(atributos parametro, int parametroAComprobar);




//----------------------  Funciones de Impresion --------------------------------------

/**
 * Imprime como una cadena de caracteres una entrada de la tabla de simbolos dada
 */
void imprimeEntrada(int indice);

/**
  * Imprime como cadena el tipo de entrada dado
**/
void imprimeTipoEntrada(tEntrada tipo);

/**
  * Imprime como cadena el tipo de dato dado
**/
void imprimeTipoDato(tDato tipo);

/**
 * Imprime por pantalla la tabla de simbolos a continuacion del mensaje dado
 */
void imprimeTS();

/**
 * Imprime por pantalla un atributo dado
 */
void imprimeAtributo(atributos e, char *msj);

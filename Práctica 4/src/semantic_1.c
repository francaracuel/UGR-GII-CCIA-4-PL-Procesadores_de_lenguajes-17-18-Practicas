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
// semantic.c
//
// Fichero C que define los métodos en semantic.h
//
////////////////////////////////////////////////////////////////////////////////

#include "semantic.h"


///////////////////////////FUNCIONES MANEJO TABLA SIMBOLOS////////////////

// Inserta una marca de bloque en la tabla de símbolos
void TS_InsertaMARCA(){
  entradaTS entrada;
  entrada.entrada = MARCA;
  entrada.nombre = "{";
  entrada.tipoDato = DESCONOCIDO;
  entrada.parametros = 0;
  entrada.dimensiones = 0;
  entrada.TamDimen1 = 0;
  entrada.TamDimen2 = 0;

}

void tsVaciarEntradas() {
  while (TS[TOPE-1].entrada != MARCA && TOPE > 0) {
    TOPE--;
  }
  if (TS[TOPE-1].entrada == MARCA) {
    TOPE--;
  }
}


//entradaTS = entradaTS
//tEntrada = tipoEntrada
//tDato = dtipo
//atributos = atributos
//MAX_ENTRADAS = MAX_TS


int TS_anadirEntrada(entradaTS ent) {
  if(TOPE < MAX_TS) {
    TS[TOPE].entrada=ent.entrada;
    TS[TOPE].nombre=ent.nombre;
    TS[TOPE].tipoDato=ent.tipoDato;
    TS[TOPE].parametros=ent.parametros;
    TS[TOPE].dimensiones=ent.dimensiones;
    TS[TOPE].TamDimen1=ent.TamDimen1;
    TS[TOPE].TamDimen2=ent.TamDimen2;
    TOPE++;
    imprimeTS();
    return 1;
  } else {
    printf("ERROR PILA LLENA");
    return 0;
  }
};

/**
 * Imprime por pantalla la tabla de simbolos a continuacion del mensaje dado
 */
void imprimeTS() {
  int j = 0;
  char *t, *e;

  printf("--------------------------------\n");
  while(j <= TOPE-1) {
    if(TS[j].entrada == 0) { e = "MARCA"; }
    if(TS[j].entrada == 1) { e = "FUNCION"; }
    if(TS[j].entrada == 2) { e = "VARIABLE"; }
    if(TS[j].entrada == 3) { e = "PAR_FORMAL"; }

    if(TS[j].tipoDato == 0) { t = "NO_ASIG"; }
    if(TS[j].tipoDato == 1) { t = "ENTERO"; }
    if(TS[j].tipoDato == 2) { t = "REAL"; }
    if(TS[j].tipoDato == 3) { t = "CARACTER"; }
    if(TS[j].tipoDato == 4) { t = "BOOLEANO"; }
    if(TS[j].tipoDato == 5) { t = "STRING"; }
    if(TS[j].tipoDato == 6) { t = "MATRIZ"; }
    if(TS[j].tipoDato == 7) { t = "DESC"; }
    printf("----ELEMENTO %d-----------------\n", j);
    printf("-Entrada: %-12s", e);
    printf("-Lexema: %-12s", TS[j].nombre);
    printf("-tipoDato: %-10s", t);
    printf("-nParam: %-4d", TS[j].parametros);
    printf("-numDim: %-4d", TS[j].dimensiones);
    printf("-tamDim1: %-4d", TS[j].TamDimen1);
    printf("-tamDim2: %-4d\n", TS[j].TamDimen2);
    j++;
  }
  printf("--------------------------------\n");
}

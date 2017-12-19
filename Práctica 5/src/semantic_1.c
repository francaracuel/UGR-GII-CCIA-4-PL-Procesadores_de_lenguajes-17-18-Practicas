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

inTS ts[MAX_IN];
int line = 1;
long int LIMIT = 0;
int decVar = 0;
int decParam = 0;
int decFunction = 0;
int subProg = 0;
tData globalType = NA;
int nParam = 0;
int currentFunction = -1;
int aux = 0;

FILE * file;

tData tipoTMP = 0;
tData tipoArray = 0;

inTS TF[MAX_IN];

// Devuelve si el atributo es array o no
int isArray(attrs e){

    return (e.nDim!=0);
}

// Devuelve si los dos posibles arrays que recibe tienen el mismo tamaño
int equalSize(attrs e1, attrs e2){

    return (e1.nDim == e2.nDim &&
        e1.tDim1 == e2.tDim1 &&
        e1.tDim2 == e2.tDim2);

}

// Guarda el type de la VARiable
int setType(attrs value){

    globalType = value.type;

}

///////////////////////////////////////////////////////////////////////////////
// Tabla de Símbolos
//

// Inserta una in en la tabla de símbolos
int tsAddIn(inTS in){

    // Si se tienen más enradas de las que puede alojar la tabla de símbolos
    // dará un error, si no, se inserta
	if(LIMIT < MAX_IN) {

		ts[LIMIT].in=in.in;
		ts[LIMIT].lex=in.lex;
		ts[LIMIT].type=in.type;
		ts[LIMIT].nParam=in.nParam;
		ts[LIMIT].nDim=in.nDim;
		ts[LIMIT].tDim1=in.tDim1;
		ts[LIMIT].tDim2=in.tDim2;

        // Se aumenta el contador de entradas
		LIMIT++;

        // Se muestra la tabla de símbolos por pantalla
		//printTS();

		return 1;

	} else {

		printf("Semantic Error(%d): Stack overflow", line);

		return 0;

	}

}

// Elimina una in de la tabla de símbolos
int tsDelIn(){

    // Si la tabla de símbolos tiene alguna in puede eliminar la última
    if(LIMIT > 0){

		LIMIT--;
		return 1;

	}else{

		printf("Semantic Error(%d): Empty table", line);
		return 0;

	}

}

// Elimina las entradas de la tabla de símbolos hasta la mark de LIMIT
void tsCleanIn(){

    while(ts[LIMIT-1].in != MARK && LIMIT > 0){
		LIMIT--;
	}
	if (ts[LIMIT-1].in == MARK) {
		LIMIT--;
	}

    if (ts[LIMIT-1].in == FORM) {
        while(ts[LIMIT-1].in != FUNCTION && LIMIT > 0){
    		LIMIT--;
    	}
        LIMIT--;
	}

}

// Busca una entrada según el id
int tsSearchId(attrs e){

    int i = LIMIT - 1;
	int found = 0;

	while (i > 0 && !found /*&& ts[i].in != MARK*/) {
		if (ts[i].in == VAR && strcmp(e.lex, ts[i].lex) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(!found) {
		//printf("Semantic Error(%d): Ident not declared: %s\n", line, e.lex);
		return -1;
	} else {
		return i;
	}

}

// Busca una in según el nombre
int tsSearchName(attrs e){

    int i = LIMIT - 1;
	int found = 0;


	while (i > 0 && !found /*&& ts[i].in != MARK*/) {
		if (ts[i].in == FUNCTION && strcmp(e.lex, ts[i].lex) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(!found) {
		//printf("Semantic Error(%d): Ident not declared: %s\n", line, e.lex);
		return -1;
	} else {
		return i;
	}

}

// Añade un id
void tsAddId(attrs e){

    // Para añadir un id a la pila no se puede haber llegado al LIMIT,
    // el id no puede existir y se deben estar declarando VARiables
	int j = LIMIT-1;
	int found = 0;

	if(j >= 0 && decVar == 1){
		// Se obtiene la posición de la mark del bloque
		while((ts[j].in != MARK) && (j >= 0) && !found){

			if(strcmp(ts[j].lex, e.lex) != 0){

				j--;

			} else{

				found = 1;
				printf("Semantic Error(%d): Exist ident: %s\n", line, e.lex);

	 		}

		}

		// Si no se ha encontrado significa que no existe, por lo que se añade
        // a la pila
		if(!found) {
			inTS newIn;
			newIn.in = VAR;
			newIn.lex = e.lex;
			newIn.type = globalType;
			newIn.nParam = 0;
			newIn.nDim=e.nDim;
			newIn.tDim1=e.tDim1;
			newIn.tDim2=e.tDim2;
			tsAddIn(newIn);

		}

	}
}

// Añade una mark de LIMIT
void tsAddMark(){

    inTS inInitScope;

	inInitScope.in = MARK;
	inInitScope.lex = "{";
	inInitScope.type = NA;
	inInitScope.nParam = 0;
	inInitScope.nDim = 0;
	inInitScope.tDim1 = 0;
	inInitScope.tDim2 = 0;

	tsAddIn(inInitScope);

    // Se añaden a la tabla de símbolos los parámetros de la función como las
    // VARiables locales de ese bloque
	if(subProg == 1){

		int j = LIMIT - 2, mark = 0, funct = 0;

		while(j > 0 && ts[j].in == FORM){

			/*printf("\n\n");
			printIn(j);
			printf("\n\n");*/

			if(ts[j].in == FORM) {

				inTS newIn;
				newIn.in = VAR;
				newIn.lex = ts[j].lex;
				newIn.type = ts[j].type;
				newIn.nParam = ts[j].nParam;
				newIn.nDim = ts[j].nDim;
				newIn.tDim1 = ts[j].tDim1;
				newIn.tDim2 = ts[j].tDim2;
				tsAddIn(newIn);

			}

			j--;

		}

	}

}

// Añade una in de subprograma
void tsAddSubprog(attrs e){

  inTS inSubProg;
	inSubProg.in = FUNCTION;
	inSubProg.lex = e.lex;
	inSubProg.nParam = 0;
	inSubProg.nDim = 0;
	inSubProg.tDim1 = 0;
	inSubProg.tDim2 = 0;
	inSubProg.type = e.type;

	currentFunction = LIMIT;
	tsAddIn(inSubProg);

}

// Añade una in de param formal
void tsAddParam(attrs e){

    int j = LIMIT - 1, found = 0;

	while((j != currentFunction)  && (!found) ){

		if(strcmp(ts[j].lex, e.lex) != 0) {

			j--;

		} else{

			found = 1;
			printf("Semantic Error(%d): Exist param: %s\n", line, e.lex);

        }

	}

	if(!found) {

		inTS newIn;
		newIn.in = FORM;
		newIn.lex = e.lex;
		newIn.type = globalType;
		newIn.nParam = 0;
		newIn.nDim = e.nDim;
		newIn.tDim1 = e.tDim1;
		newIn.tDim2 = e.tDim2;
		tsAddIn(newIn);

	}

}

// Actualiza el número de parámetros de la función
void tsUpdateNparam(attrs e){

    ts[currentFunction].nParam = nParam;
	ts[currentFunction].nDim=e.nDim;
	ts[currentFunction].tDim1=e.tDim1;
	ts[currentFunction].tDim2=e.tDim2;

}

//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Analizador Semántico
//

// Devuelve la in que sea función más cercana
int tsGetNextFunction(){

    int i = LIMIT - 1;
	int found = 0;

	while (i > 0 && !found) {

		if (ts[i].in == FUNCTION) {
			found = 1;
		} else {
			i--;
		}

	}

	if(!found) {
		return -1;
	} else {
		return i;
	}

}

// Comprueba si el type de la expresión coincide con lo que devuelve la función
void tsCheckReturn(attrs expr, attrs* res){

    int index = tsGetNextFunction();


	if (index > -1) {

		if (expr.type != ts[index].type) {
			printf("Semantic Error(%d): Return not equal to return function.\n", line);
			return;
		}

		attrs tmp;
		tmp.nDim = ts[index].nDim;
		tmp.tDim1 = ts[index].tDim1;
		tmp.tDim2 = ts[index].tDim2;

		if (!equalSize(expr,tmp)) {
			printf("Semantic Error(%d): Return expresion not same size than return function.\n", line);
			return;
		}

		res->type = expr.type;
		res->nDim = expr.nDim;
		res->tDim1 = expr.tDim1;
		res->tDim2 = expr.tDim2;

	} else {

		printf("Semantic Error(%d): res not declared into function.\n", line);
		return;

	}

}

// Devuelve el identificar
void tsGetId(attrs id, attrs* res){

    int index = tsSearchId(id);

	if(index==-1) {
        if(ts[index].in != FUNCTION)
		      printf("\nSemantic Error(%d): Id not found %s.\n", line, id.lex);
	} else {

		res->lex = strdup(ts[index].lex);
		res->type = ts[index].type;
		res->nDim = ts[index].nDim;
		res->tDim1 = ts[index].tDim1;
		res->tDim2 = ts[index].tDim2;

	}

}

// Realiza la comprobación de la operación !, &, ~
void tsOpUnary(attrs op, attrs o, attrs* res){

    if (o.type != BOOLEANO || isArray(o)) {
		printf("Semantic Error(%d): Not operator expects logic expression.", line);
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación +, -
void tsOpSign(attrs op, attrs o, attrs* res){

    if ((o.type != FLOTANTE && o.type != ENTERO) || isArray(o)) {
		printf("Semantic Error(%d): Operator expects integer or real expression.", line);
	}

	res->type = o.type;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación +, - binaria
void tsOpSignBin(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
	    printf("Semantic Error(%d): Expressions must be equals types.", line);
  		return;
  	}

	if (o1.type != ENTERO && o1.type != FLOTANTE) {
		printf("Semantic Error%d): Invalid type in op. Both must be equals.", line);
		return;
	}

	if (isArray(o1) && isArray(o2)){

		if(equalSize(o1,o2)){

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		} else {

            printf("Semantic Error(%d): Size arrays must be same", line);
			return;

		}

	} else {

		if (isArray(o1) && !isArray(o2)) {

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		}

		if (!isArray(o1) && isArray(o2)){

			if (strcmp(op.lex,"-")==0){

				printf("Semantic Error(%d): Operation not allowed.", line);
				return;

			} else {

				res->type = o2.type;
				res->nDim = o2.nDim;
				res->tDim1 = o2.tDim1;
				res->tDim2 = o2.tDim2;

			}

		}

	}

}

// Realiza la comprobación de la operación *, /
void tsOpMul(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Semantic Error(%d): Expressions must be same types.", line);
		return;
	}

	if (o1.type != ENTERO && o1.type != FLOTANTE) {
		printf("Semantic Error%d): Invalid type in op. Both must be same.", line);
		return;
	}

	if (isArray(o1) && isArray(o2)){

		if(equalSize(o1,o2)){

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		} else {

            printf("Semantic Error(%d): Size arrays must be same", line);
			return;

		}

	} else {

		if (isArray(o1) && !isArray(o2)) {

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		}

		if (!isArray(o1) && isArray(o2)){

			if (strcmp(op.lex,"-")==0){

				printf("Semantic Error(%d): Operation not allowed.", line);
				return;

			} else {

				res->type = o2.type;
				res->nDim = o2.nDim;
				res->tDim1 = o2.tDim1;
				res->tDim2 = o2.tDim2;

			}

		}

	}

}

// Realiza la comprobación de la operación &&
void tsOpAnd(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Semantic Error (%d): Expressions must be same types.", line);
		return;
	}
	if (o1.type != BOOLEANO || isArray(o1) || isArray(o2)) {
		printf("Semantic Error(%d):Invalid type in op. Both must be same. Expects BOOLEANO", line);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación ||
void tsOpOr(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Semantic Error (%d): Expressions must be same types.", line);
		return;
	}
	if (o1.type != BOOLEANO || isArray(o1) || isArray(o2)) {
		printf("Semantic Error(%d):Invalid type in op. Both must be same. Expects BOOLEANO", line);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación ==, !=
void tsOpEqual(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Semantic Error (%d): Expressions must be same types.", line);
		return;
	}
	if (isArray(o1) || isArray(o2)) {
		printf("Semantic Error(%d):Invalid type in op. Both must be same. Expects ENTERO or REAL.", line);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación <, >, <=, >=, <>
void tsOpRel(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {

		printf("Semantic Error (%d): Expressions must be same types.", line);
		return;
	}
	if ((o1.type != ENTERO && o1.type != FLOTANTE) || isArray(o1) || isArray(o2)) {
		printf("Semantic Error(%d):Invalid type in op. Both must be same. Expects ENTERO or REAL.", line);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}






// Realiza la comprobación de la llamada a una función
void tsFunctionCall(attrs id, attrs* res){

    int index = tsSearchName(id);

	if(index==-1) {

		currentFunction = -1;

		printf("\nSemantic Error(%d)): Function: Id not found %s.\n", line, id.lex);

    } else {

		if (nParam != ts[index].nParam) {
			printf("Semantic Error(%d): Number of param not valid.\n", line);
		} else {

			currentFunction = index;
			res->lex = strdup(ts[index].lex);
			res->type = ts[index].type;
			res->nDim = ts[index].nDim;
			res->tDim1 = ts[index].tDim1;
			res->tDim2 = ts[index].tDim2;

		}

	}

}

// Realiza la comprobación de cada parámetro de una función
void tsCheckParam(attrs param, int checkParam){

    int posParam = (currentFunction + ts[currentFunction].nParam) - (checkParam - 1);

	int error = ts[currentFunction].nParam - checkParam + 1;

	if (param.type != ts[posParam].type) {
		printf("Semantic Error(%d): Param type (%d) not valid.\n", line, error);
		return;
	}

	if (param.nDim != ts[posParam].nDim || param.tDim1 != ts[posParam].tDim1  || param.tDim2 != ts[posParam].tDim2) {
		printf("Semantic Error(%d): Size param (%d) not valid.\n", line, error);
		return;
	}

}

//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Visualización
//

// Muestra una in de la tabla de símbolos
void printIn(int row){

    inTS e = ts[row];
	printf("\n\ntype Entrada: %d\nLexema: %s\ntype Dato: %d\nNum Parametros: %d\nDimensiones[i][j]: %d[%d][%d]\n",
		e.in, e.lex, e.type, e.nParam, e.nDim, e.tDim1, e.tDim2);

}

// Muestra el type de la in
void printInType(tIn type){



}

// Muestra el type del dato recibido
void printDataType(tData type){



}

// Muestra la tabla de símbolos
void printTS(){

    int j = 0;
	char *t, *e;

	printf("--------------------------------\n");
	while(j <= LIMIT-1) {
		if(ts[j].in == 0) { e = "MARK"; }
		if(ts[j].in == 1) { e = "FUNCTION"; }
		if(ts[j].in == 2) { e = "VAR"; }
		if(ts[j].in == 3) { e = "FORM"; }

		if(ts[j].type == 0) { t = "NO_ASIG"; }
		if(ts[j].type == 1) { t = "ENTERO"; }
		if(ts[j].type == 2) { t = "FLOTANTE"; }
		if(ts[j].type == 3) { t = "CARACTER"; }
		if(ts[j].type == 4) { t = "BOOLEANO"; }
		if(ts[j].type == 5) { t = "STRING"; }
		if(ts[j].type == 6) { t = "MATRIZ"; }
		if(ts[j].type == 7) { t = "NA"; }
		printf("----ELEMENTO %d-----------------\n", j);
		printf("-Entrada: %-12s", e);
		printf("-Lexema: %-12s", ts[j].lex);
		printf("-type: %-10s", t);
		printf("-nParam: %-4d", ts[j].nParam);
		printf("-nDim: %-4d", ts[j].nDim);
		printf("-tDim1: %-4d", ts[j].tDim1);
		printf("-tDim2: %-4d\n", ts[j].tDim2);
		j++;
	}
	printf("--------------------------------\n");

}

// Muestra un atributo recibido
void printAttr(attrs e, char *msg){

    char *t;

	if(e.type == 0) { t = "NO_ASIG"; }
	if(e.type == 1) { t = "ENTERO"; }
	if(e.type == 2) { t = "FLOTANTE"; }
	if(e.type == 3) { t = "CARACTER"; }
	if(e.type == 4) { t = "BOOLEANO"; }
	if(e.type == 5) { t = "STRING"; }
	if(e.type == 6) { t = "MATRIZ"; }
	if(e.type == 7) { t = "NA"; }
	printf("------%s-------------------------\n", msg);
	printf("-attrs: %-4d", e.attr);
	printf("-Lexema: %-12s", e.lex);
	printf("-type: %-10s", t);
	printf("-nDim: %-4d", e.nDim);
	printf("-tDim1: %-4d", e.tDim1);
	printf("-tDim2: %-4d\n", e.tDim2);
	printf("-------------------------------\n");

}


unsigned int compruebaTipos2(attrs a,attrs op, attrs b)
{



	unsigned int tipo = 10;
	int existe = 0;
	int topeTMP = LIMIT-1 ;

	while( existe == 0 && topeTMP>=0)
	{

        if ( !strcmp(ts[topeTMP].lex,a.lex) ){
			existe = 1;
			tipo = ts[topeTMP].type;
		}
		topeTMP--;
	}

	if(existe){
		if ( a.attr > b.attr ){
			if ( a.type == FLOTANTE && b.type == ENTERO ){
				b.type = FLOTANTE;
			}
		}
		if ( b.attr > a.attr ){
			if ( a.type == ENTERO && b.type == FLOTANTE ){
				a.type = FLOTANTE;
			}
		}
		if(a.type != b.type){
			fprintf(stderr,"[Linea %d]: tipos incompatible\n",line);
		}
		else{
			tipo = a.type;
		}
		if(op.type == BOOLEANO) tipo = BOOLEANO;
	}
	else
	{			fprintf(stderr,"[Linea %d]: %s no existe\n",line,a.lex);
	}
	return tipo;
}
/********************************************
**************generacion codigo**************
*********************************************/
int temp = 0;
int etiq = 0;
int varPrinc=1;
int decIF = 0,decElse=0;

char * temporal(){
	char * cadena;
	cadena = (char *) malloc(20);
	sprintf(cadena, "temp%d",temp);
	temp++;
	return cadena;
}
char * etiqueta(){
	char * cadena;
	cadena = (char *) malloc(20);
	sprintf(cadena, "etiqueta_%d",etiq);
	etiq++;
	return cadena;
}

// Abre un fichero para crear el código intermedio
void generaFich(){

    file = fopen("generated.c","w");

	fputs("#include <stdio.h>\n",file);

}

// Cerrar fichero
void closeInter(){

    fclose(file);

}


void generaDecVar(attrs a){
	char * sent;
	sent = (char *) malloc(1000);
	if(tipoTMP == ENTERO){
		sprintf(sent,"int %s;\n",a.lex);
		fputs(sent,file);
	}
	else if(tipoTMP == FLOTANTE){
		sprintf(sent,"float %s;\n",a.lex);
		fputs(sent,file);
	}
	else if(tipoTMP == CARACTER){
		sprintf(sent,"char %s;\n",a.lex);
		fputs(sent,file);
	}
	else if(tipoTMP == BOOLEANO){
		LIMIT++;
		ts[LIMIT].in = descriptor;
		ts[LIMIT].descriptor.EtiquetaSalida = etiqueta();
		sprintf(sent,"int %s;\n",a.lex);
		fputs(sent,file);
	}
	free(sent);
}
void genera(int type,attrs dest,attrs a, attrs op, attrs b){
	char * sent;
	sent = (char *) malloc(200);
	if(type == 1){

		sprintf(sent,"int %s;\n%s = %s %s %s;\n",dest.lex,dest.lex,a.lex,op.lex,b.lex);
		fputs(sent,file);
	}
	else if(type == 4 ){
		sprintf(sent,"%s %s %s %s\n",dest.lex,a.lex,op.lex,b.lex);
		fputs(sent,file);
	}
	free(sent);
}
/*	1. else y salida
	2. entrada y salida
*/
void insertaDesc(int type){
	LIMIT++;
	TF[LIMIT].in = descriptor;
	if(type == 1){
		TF[LIMIT].descriptor.EtiquetaElse = etiqueta();
		TF[LIMIT].descriptor.EtiquetaSalida = etiqueta();
	}else if(type == 2){
		TF[LIMIT].descriptor.EtiquetaEntrada = etiqueta();
		TF[LIMIT].descriptor.EtiquetaSalida = etiqueta();
	}
}
void eliminaDesc(){
	LIMIT--;
}
/*	1.if con else
	2.while
	3.if sin else
*/
void insertaCond(int type){

	char * cadena, *sent;
	int topeTMP = LIMIT;
	cadena = (char *) malloc(20);
	sent = (char *) malloc(150);


	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}
	if(type == 1){
		sprintf(cadena, "temp%d",temp-1);
		TF[topeTMP].lex = (char *) malloc(50);
		strcpy(TF[topeTMP].lex,cadena);
		sprintf(sent,"if(!%s) goto %s;\n",cadena,TF[topeTMP].descriptor.EtiquetaElse);
	}
	else if(type == 2){
				sprintf(cadena, "temp%d",temp-1);
				sprintf(sent,"if(!%s) goto %s;\n",cadena,TF[topeTMP].descriptor.EtiquetaSalida);
			}

	fputs(sent,file);
	free(sent);
	free(cadena);
}
void insertaEtiqElse(){
	int topeTMP = LIMIT-1;
	char * sent;
	sent = (char *) malloc(200);

	while(TF[topeTMP].in != descriptor && topeTMP>0){

		topeTMP--;
	}
	if(decElse == 1){
		sprintf(sent,"goto %s;\n%s:\n",TF[topeTMP].descriptor.EtiquetaSalida,TF[topeTMP].descriptor.EtiquetaElse);
	}
	else{
		sprintf(sent,"%s:",TF[topeTMP].descriptor.EtiquetaElse);
		}
	fputs(sent,file);
  printf("FUERA_ELSE\n" );
}

void insertaEtiqSalida(){
	int topeTMP = LIMIT-1;
	char * sent;
	sent = (char *) malloc(200);
  printf("\nAntes\n");
	while(TF[topeTMP].in != descriptor && topeTMP>0){
    printf("\nDentro while %d\n", topeTMP);
		topeTMP--;
	}

	sprintf(sent,"%s:\n",TF[topeTMP].descriptor.EtiquetaSalida);

	fputs(sent,file);
  printf("FUERA\n" );
}
void insertaEtiqEntrada(){
	int topeTMP = LIMIT;
	char * sent;
	sent = (char *) malloc(200);
	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}

	sprintf(sent,"%s:\n",TF[topeTMP].descriptor.EtiquetaEntrada);
	fputs(sent,file);
}
void insertaGotoEntrada(){
	int topeTMP = LIMIT;
	char * sent;
	sent = (char *) malloc(200);
	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}

	sprintf(sent,"goto %s;\n",TF[topeTMP].descriptor.EtiquetaEntrada);
	fputs(sent,file);
}
void generaEntSal(int type,attrs a){

	if(type == 1){
		fputs("scanf(\"%",file);
		if(a.type == ENTERO) fputs("d",file);
		else if(a.type == FLOTANTE) fputs("f",file);
		else if(a.type == CARACTER) fputs("c",file);
		else if(a.type == BOOLEANO) fputs("d",file);
		fputs("\",&",file);
		fputs(a.lex,file);
		fputs(");",file);
		fputs("\n",file);
	}
	else{
		if(a.type != NA){
			fputs("printf(\"%",file);
			if(a.type == ENTERO) fputs("d",file);
			else if(a.type == FLOTANTE) fputs("f",file);
			else if(a.type == CARACTER) fputs("c",file);
			else if(a.type == BOOLEANO) fputs("d",file);
			fputs("\",",file);
			fputs(a.lex,file);
			fputs(");",file);
		}else {
			fputs("printf(",file);
			fputs(a.lex,file);
			fputs(");",file);
		}
		fputs("\n",file);
	}
}

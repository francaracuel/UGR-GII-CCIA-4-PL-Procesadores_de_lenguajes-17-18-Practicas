################################################################################
##
## Makefile para la creación de los programas necesarios en las prácticas
##
## Ismael Sánchez García
## Juan Manuel Fajardo Sarmiento
## Francisco Javier Caracuel Beltrán
##
## PL - Procesadores de Lenguajes - CCIA
##
## ETSIIT - UGR
##
## Curso 2017-2018
##
################################################################################

OBJ = obj
SRC = src
BIN = bin

syntactic: $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Generando ejecutable...
	@echo ""
	gcc -o $(BIN)/syntactic $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Ejecutable generado con éxito
	@echo ""

$(OBJ)/main.o: $(SRC)/main.c
	gcc -o $@ -c $(SRC)/main.c

$(OBJ)/y.tab.o: $(SRC)/y.tab.c
	gcc -o $@ -c $(SRC)/y.tab.c

$(SRC)/y.tab.c: $(SRC)/syntactic.y $(SRC)/lex.yy.c
	bison -o $@ $(SRC)/syntactic.y

$(SRC)/lex.yy.c: $(SRC)/lexicon.l
	lex -o $@ $(SRC)/lexicon.l

all:
	make syntactic

clean:
	@echo ""
	@echo Limpiando los ficheros...
	@echo ""
	rm -rf $(BIN)/syntactic $(OBJ)/* $(SRC)/y.tab.c $(SRC)/lex.yy.c
	@echo ""
	@echo Limpieza finalizada
	@echo ""

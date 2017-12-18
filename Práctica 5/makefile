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
INCLUDE = include

semantic: $(OBJ)/semantic.o $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Generando ejecutable...
	@echo ""
	gcc -o $(BIN)/semantic $(OBJ)/semantic.o $(OBJ)/main.o $(OBJ)/y.tab.o
	@echo ""
	@echo Ejecutable generado con éxito
	@echo ""

$(OBJ)/main.o: $(SRC)/main.c
	gcc -o $@ -c $(SRC)/main.c -I$(INCLUDE)

$(OBJ)/y.tab.o: $(SRC)/y.tab.c
	gcc -o $@ -c $(SRC)/y.tab.c -I$(INCLUDE)

$(SRC)/y.tab.c: $(SRC)/semantic.y $(SRC)/lex.yy.c
	bison -v -d -o $@ $(SRC)/semantic.y

$(SRC)/lex.yy.c: $(SRC)/lexicon.l
	lex -o $@ $(SRC)/lexicon.l

$(OBJ)/semantic.o: $(SRC)/semantic_1.c
	gcc -o $@ -c $(SRC)/semantic_1.c -I$(INCLUDE)

all:
	make semantic

clean:
	@echo ""
	@echo Limpiando los ficheros...
	@echo ""
	rm -rf $(BIN)/semantic $(OBJ)/* $(SRC)/y.tab.c $(SRC)/lex.yy.c
	@echo ""
	@echo Limpieza finalizada
	@echo ""

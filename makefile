# Makefile para "Projeto - Análise Empírica de Algoritmos de ordenação" C++ aplication
# Estrutura de Dados Básicas I - IMD/UFRN
# Created by Daniel Oliveira, Rodolpho Erick e Luis Eduardo

# Comando do Sistema Operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf

# Compilador
CC = g++

# Variáveis para os subdiretorios
BIN_DIR = ./bin
OBJ_DIR = ./build
DOC_DIR = ./doc
INC_DIR = ./include
SRC_DIR = ./src
TEST_DIR = ./test

# Opções de compilação
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy

# Define o alvo (target) para a compilacao completa.
# Ao final da compilacao, remove os arquivos objeto.
all: analise
debug: CFLAGS += -g -O0
debug: analise

# Alvo (target) para a criação da estrutura de diretorios
# necessaria para a geracao dos arquivos objeto 
init:
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(BIN_DIR)/

# Alvo (target) para a construcao do executavel analise
# Define os arquivos binarysearch.o, sequencialsearch.o, compare.o e main.o como dependencias
analise: $(OBJ_DIR)/sort_algorithm.o $(OBJ_DIR)/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel analise criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo (target) para a construcao do objeto sort_algorithm.o
# Define os arquivos sort_algorithm.cpp e sort_algorithm.h como dependencias.
$(OBJ_DIR)/sort_algorithm.o: $(SRC_DIR)/sort_algorithm.cpp $(INC_DIR)/sort_algorithm.h
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a construcao do objeto main.o
# Define o arquivo main.cpp como dependencias.
$(TEST_DIR)/main.o: $(TEST_DIR)/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
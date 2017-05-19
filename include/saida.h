/**
* @file 	saida.h
* @brief 	Arquivo cabecalho com as definicoes de funcoes que geram as saidas do programa
* @author 	Daniel Oliveira (daniel99955@hotmail.com)
* @author	Rodolpho Erick 	(rodolphoerick90@gmail.com)
* @since 	19/05/2017
* @date 	19/05/2017
*/

#ifndef SAIDA_H
#define SAIDA_H

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ofstream;

#include <string>
using std::string;
/**
* @brief 	Funcao que escreve estatisticas do algoritmo seletion_sort
* @param 	*best, apontador para melhor tempo
* @param 	*mid, apontador para tempo medio
* @param 	*worse, apontador para pior tempo
* @return 	void, sem retorno
*/
void write(double *best, double *mid, double *worse, double *data, int cont);

#endif
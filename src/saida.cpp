/**
* @file     saida.h
* @brief    Arquivo de corpo implemetacoes de funcoes que geram as saidas do programa
* @author   Daniel Oliveira (daniel99955@hotmail.com)
* @author   Rodolpho Erick  (rodolphoerick90@gmail.com)
* @since    19/05/2017
* @date     19/05/2017
*/

#include "saida.h"
/**
* @brief    Funcao que escreve estatisticas do algoritmos  de ordenação seletion_sort
* @param    *best, apontador para melhor tempo
* @param    *mid, apontador para tempo medio
* @param    *worse, apontador para pior tempo
* @return   void, sem retorno
*/
void write(double *best, double *mid, double *worse, double *data, int cont) {
	string caminho;
	cin >> "Qual o algoritmo de ordenação?" << endl;

	ofstream saida("data/estatistica/"+caminho+".dat") ;

	if(!saida) {
		cout << "Arquivo de saida nao encontrado" << endl;
		exit(1);
	}

	for(int i = 0; i < cont; i++) {
		saida << data[i] << " " << best[i] << " " << mid[i] << " " << worse[i] << endl;
	}

	saida.close();
}

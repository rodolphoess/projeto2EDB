/**
* @file 	main.cpp
* @brief	Função principal do programa de cronometragem dos algoritmos de ordenação por inserção, seleção, bolha, merge, quick e radix.
* @author	Rodolpho Erick 	(rodolphoerick90@gmail.com)
* @author	Daniel Oliveira (daniel99955@hotmail.com)
* @author	Luis Eduardo 	(luiseduardorique@gmail.com)
* @since	08/05/2017
* @date		08/05/2017
*/

#include <iostream>

#include "../include/sort_algorithm.h"

using namespace std;

int main() {
	int vetorTotalDesordenado[1000], vetorParcialDesordenado[1000];

	for (int i = 1000; i > 0; i--) {	/**< Loop para implementar um vetor totalmente desordenado de 1000 até 1*/
		vetorTotalDesordenado[i] = i;
	}

	int aux = 0;
	for (int i = 0; i < sizeof(vetorParcialDesordenado) / 4; i++) {	/**< Loop para implementar um vetor parcialmente desordenado de 0 a 999. */
		if (i >= 100 && i <= 200) {
			aux = i;
			vetorParcialDesordenado[aux * 2];
		} else if (i >= 500 && i <= 600) {
			aux = i;
			vetorParcialDesordenado[aux * 2];
		} else if (i >= 900 && i <= 999) {
			aux = i;
			vetorParcialDesordenado[aux * 2];
		} else {
			vetorParcialDesordenado[i] = i;
		}		
	}
	

	return 0;
}
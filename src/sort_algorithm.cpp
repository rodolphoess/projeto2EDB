/**
* @file 	sort_algorithm.cpp
* @brief	Arquivo de corpo com as implementações das funções que realizam a ordenação 
* @author	Daniel Oliveira (daniel99955@hotmail.com)
* @author 	Rodolpho Erick	(rodolphoerick90@gmail.com)
* @author	Luis Eduardo 	(luiseduardorique@gmail.com)
* @since	08/05/2017
* @date		08/05/2017
*/

#include "../include/sort_algorithm.h"

/**
* @brief			Função que realiza a ordenação por seleção em um vetor 
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void selectionSort(float *v, int tamanho) {
	for (int ii = 0; ii < tamanho - 1; ii++) {
		int menor = i;
			for (int jj = ii + 1; jj < tamanho; jj++) {
				if (v[jj] < v[menor]) menor = jj;
			}
		if (menor != i) {
			float aux = v[ii];
			v[ii] = v[menor];
			v[menor] = aux;
		}	
	}
}

/**
* @brief			Função que realiza a ordenação por inserção em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void insertionSort(float *v, int tamanho) {	
	for (int ii = 0; ii < tamanho; ii++) {
		int el = v[ii];
			for (int jj = ii; jj >= 1 && v[jj] < v[jj - 1]; jj--) {
				float aux = v[jj];
				v[jj] = v[jj - 1];
				v[jj - 1] = aux;
			}
	}
}

/**
* @brief			Função que realiza a ordenação por bolha em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void bubbleSort(float *v, int tamanho) {	
	for (int ii = 0; ii < tamanho; ii++) {
		for (int jj = 0; jj < tamanho - 1; jj++) {
			if (v[jj] > v[jj + 1]) {
				float aux = v[jj];
				v[jj] = v[jj + 1];
				v[jj + 1] = aux;
			}
		}
	}
}

/**
* @brief			Função que realiza a ordenação quicksort em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void quickSort(float *v, int *esq, int *dir) {	
	int i = *esq;
	int j = *dir;
	int tmp;
	int pivot = v[(i + j) / 2];

	while (i <= j) {
		while (v[i] < pivot) {
			i++;
		}

		while (v[j] > pivot) {
			j--;
		}

		if (i <= j) {
			tmp = v[i];
			v[i] = v[j];
			v[j] = tmp;
			i++;
			j--;
		}

		if (esq < j) {
			quickSort(v, esq, &j);
		}

		if (i < dir) {
			quickSort(v, &i, dir);
		}
	}
}

/**
* @brief			Função que realiza a ordenação mergesort em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void mergeSort(float *v, int tamanho) {	
	
}

/**
* @brief			Função que realiza a ordenação decimal em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void radixSort(float *v, int tamanho) {	
	
}
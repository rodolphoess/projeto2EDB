/**
* @file 	sort_algorithm.cpp
* @brief	Arquivo de corpo com as implementações das funções que realizam a ordenação
* @author	Daniel Oliveira (daniel99955@hotmail.com)
* @author 	Rodolpho Erick	(rodolphoerick90@gmail.com)
* @since	08/05/2017
* @date	08/05/2017
*/

#include "../include/sort_algorithm.h"

/**
* @brief			Função que realiza a ordenação por seleção em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void selectionSort(int *v, int tamanho) {
	for (int ii = 0; ii < tamanho - 1; ii++) {
		int menor = ii;
			for (int jj = ii + 1; jj < tamanho; jj++) {
				if (v[jj] < v[menor]) menor = jj;
			}
		if (menor != ii) {
			float aux = v[ii];
			v[ii] = v[menor];
			v[menor] = aux;
		}
	}
}

/**
* @brief			Função que realiza a ordenação por inserção em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho		Inteiro com o tamanho do vetor
*/
void insertionSort(int *v, int tamanho) {
	for (int ii = 0; ii < tamanho; ii++) {
		//int el = v[ii];
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
void bubbleSort(int *v, int tamanho) {
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
void quickSort(int *v, int tamanho) {
	if (tamanho <= 1) return;

	int esq = 1;
	int dir = tamanho - 1;

	while (esq >= dir) {
		while ((v[esq <= v[0]]) && (esq < dir)) {
			esq++;
		}

		while (v[dir] > v[0]) {
			dir--;
		}

		if (v[dir] > v[esq]) {
			int aux = v[esq];
			v[esq] = v[dir];
			v[dir] = aux;
		}
	}

}

/**
* @brief			Função que realiza a ordenação mergesort em um vetor
* @param *v			Vetor com os elementos desordenados
* @param low		Primeiro elemento do vetor
* @param high		Ultimo elemento do vetor
*/
void mergeSort(int *v, int low, int high) {
	int mid;

	if (low < high) {
		mid = (low + high) / 2;
		mergeSort(v, low, mid);
		mergeSort(v, mid + 1, high);
		intercalar(v, low, high, mid);
	}
}

/**
* @brief			Função que realiza a intercalacao durante a ordenacao mergesort em um vetor
* @param *a			Vetor intercalado com os elementos desordenados
* @param low		Primeiro elemento do vetor
* @param high		Ultimo elemento do vetor
* @param mid		Elemento do meio no vetor
*/
void intercalar(int *a, int low, int high, int mid) {
	int i = low, j = mid + 1, k = low, c[50];

	while (i <= mid && j <= high) {
		if (a[i] < a[j]) {
			c[k] = a[i];
			k++;
			i++;
		} else {
			c[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		c[k] = a[i];
		k++;
		i++;
	}

	while (j <= high) {
		c[k] = a[j];
		k++;
		j++;
	}

	for (i = low; i < k; i++) {
		a[i] = c[i];
	}
}


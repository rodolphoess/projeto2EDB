/**
* @file 	sort_algorithm.h
* @brief	Arquivo de cabeçalho com funções que realizam a ordenação 
* @author	Daniel Oliveira (daniel99955@hotmail.com)
* @author 	Rodolpho Erick	(rodolphoerick90@gmail.com)
* @author	Luis Eduardo 	(luiseduardorique@gmail.com)
* @since	08/05/2017
* @date		08/05/2017
*/

#ifndef  _SORT_ALGORITHM_H
#define _SORT_ALGORITHM_H


/**
* @brief			Função que realiza a ordenação por seleção em um vetor 
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void selectionSort(int *v, int tamanho);

/**
* @brief			Função que realiza a ordenação por inserção em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void insertionSort(int *v, int tamanho);

/**
* @brief			Função que realiza a ordenação por bolha em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void bubbleSort(int *v, int tamanho);

/**
* @brief			Função que realiza a ordenação quicksort em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void quickSort(int *v, int tamanho);

/**
* @brief			Função que realiza a ordenação mergesort em um vetor
* @param *v			Vetor com os elementos desordenados
* @param low		Primeiro elemento do vetor
* @param high		Ultimo elemento do vetor
*/
void mergeSort(int *v, int low, int high);

/**
* @brief			Função que realiza a intercalacao durante a ordenacao mergesort em um vetor
* @param *a			Vetor intercalado com os elementos desordenados
* @param low		Primeiro elemento do vetor
* @param high		Ultimo elemento do vetor
* @param mid		Elemento do meio no vetor
*/
void intercalar(int *a, int low, int high, int mid);

#endif
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
void selectionSort(float *v, int tamanho);

/**
* @brief			Função que realiza a ordenação por inserção em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void insertionSort(float *v, int tamanho);

/**
* @brief			Função que realiza a ordenação por bolha em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void bubbleSort(float *v, int tamanho);

/**
* @brief			Função que realiza a ordenação quicksort em um vetor
* @param *v			Vetor com os elementos desordenados
* @param *esq		Inteiro indicando onde inicia o vetor
* @param *dir		Inteiro indicando onde termina o vetor
*/
void quickSort(float *v, int *esq, int *dir);

/**
* @brief			Função que realiza a ordenação mergesort em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void mergeSort(float *v, int tamanho);

/**
* @brief			Função que realiza a ordenação decimal em um vetor
* @param *v			Vetor com os elementos desordenados
* @param tamanho	Inteiro com o tamanho do vetor
*/
void radixSort(float *v, int tamanho);


#endif
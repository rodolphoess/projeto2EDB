/**
* @file     estatistica.h
* @brief	Header file with the definitions of the functions that perform time statistics
* @author	Daniel Oliveira (daniel99955@hotmail.com)
* @author 	Rodolpho Erick	(rodolphoerick90@gmail.com)
* @since 	19/05/2017
* @date 	19/05/2017
*/

#ifndef ESTATISTICA_H
#define ESTATISTICA_H

/**
* @brief            	Function that realize the seletion of the less time of the execution
* @param        	tam, inteiro com tamanho
* @param        	*time, pointer for tempo
* @param        	*best, pointer for best
* @param         	&pos, passing by pos refence
* @return       	void, without return
*/
void estatisticaMelhor(double *time, int tam, double *best, int &pos);

/**
* @brief        	Function that make realize the average of times of execution
* @param        	tam, inteiro com tamanho
* @param        	*time, pointer for tempo
* @param        	*medium, pointer for medium
* @param        	&pos, passing by pos refence
* @return       	void, without return
*/
void estatisticaMedio(double *time, int tam, double *medium, int &pos);

/**
* @brief        	Function that realize the seletion of the greater time of the execution
* @param        	tam, inteiro com tamanho
* @param        	*time, pointer for tempo
* @param        	*worse, pointer for worse
* @param        	&pos, passing by pos refence
* @return       	void, without return
*/
void estatisticaPior(double *tempo, int tam, double *worse, int &pos);

#endif
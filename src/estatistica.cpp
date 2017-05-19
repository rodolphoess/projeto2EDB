/**
* @file     estatistica.cpp
* @brief	Arquivo de corpo com as implementacoes das funcoes que realizam estatistica de tempo
* @author	Daniel Oliveira (daniel99955@hotmail.com)
* @author 	Rodolpho Erick	(rodolphoerick90@gmail.com)
* @since 	19/05/2017
* @date 	19/05/2017
* @sa 		estatistica.h
*/

#include "estatistica.h"

/**
* @brief        Function that realize the seletion of the less time of the execution
* @param        *time, pointer for tempo
* @param        *best, pointer for best
* @param        &pos, passing by pos refence
* @return       void, without return
*/
void estatisticaMelhor(double *time, int tam, double *best, int &pos) {
    double better = time[0];

    for(int i = 1; i < tam; i++) 
        if(better > time[i])
            best = time[i];

    bes[pos] = better;
}

/**
* @brief        Function that make realize the average of times of execution
* @param        *time, pointer for tempo
* @param        *medium, pointer for medium
* @param        &pos, passing by pos refence
* @return       void, without return
*/
void estatisticaMedio(double *time, int tam, double *medium, int &pos) {
    double plus = 0.0;

    for(int i = 0 ; i < tam ; i++ ) {
        plus += time[i];
    }

    medium[pos] = plus/tam;

}

/**
* @brief        Function that realize the seletion of the greater time of the execution
* @param        *time, pointer for tempo
* @param        *worse, pointer for worse
* @param        &pos, passing by pos refence
* @return       void, without return
*/
void estatisticaPior(double *tempo, int tam, double *worse, int &pos) {
    double worst = time[0];

    for(int i = 1; i < tam; i++) 
        if(worst < time[i])
            worst = time[i];
    
    worse[pos] = worst;
}

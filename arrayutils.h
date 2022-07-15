#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef ARRAYUTILS_H
#define ARRAYUTILS_H

    //propriedade de vetor, retorna o tamanho inteiro do vetor
    #define length(arr) sizeof(arr) / sizeof(arr[0])
    
    //forEach para listas, NÃO TESTADO
    #define forEachItem(item, list) \
    for(T * item = list->head; item != NULL; item = item->next)
      
    /*Diretiva forEach
    Sintaxe: 
    forEach(item, array) {
        instruções;
        instruções;
    } */
    #define forEach(item, array) \
    for(int keep = 1, \
    count = 0,\
    size = sizeof (array) / sizeof *(array); \
    keep && count != size; \
    keep = !keep, count++) \
    for(item = (array) + count; keep; keep = !keep)
    
    //algoritmos de pesquisa       
    extern int searchInt(int*, int);
    extern float searchFloat(float*, float);
    extern double searchDouble(double*, double);
    
    /*algoritmos de leitura,
    utilizar free(nome_array) após a execução*/
    extern int* readIntArray(int size);
    extern float* readFloatArray(int size);
    extern double* readDoubleArray(int size);

    //bubble sorts para arrays unidimenssionais
    //para matriz usar dentro de um for
    extern void bubbleSortInt(int*, int);
    extern void bubbleSortFloat(float*, int);
    extern void bubbleSortDouble(double*, int); 

    //quick sorts para arrays unidimenssionais
    //para matriz usar dentro de um for
    extern void quickSortInt(int*, int, int);
    extern void quickSortFloat(float*, int, int);
    extern void quickSortDouble(double*, int, int);
         
    //imprimir array unidimensional
    //para matriz usar dentro de um for
    extern void printIntArray(int*, int);
    extern void printFloatArray(float*, int);
    extern void printDoubleArray(double*, int);

#endif






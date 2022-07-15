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
    extern int searchInt(int *arr, int size, int key);
    extern float searchFloat(float *arr, int size, float key);
    extern double searchDouble(double *arr, int size, double key);
    
    /*algoritmos de leitura,
    utilizar free(nome_array) após a execução*/
    extern int* readIntArray(int size);
    extern float* readFloatArray(int size);
    extern double* readDoubleArray(int size);

    //bubble sorts para arrays unidimenssionais
    //para matriz usar dentro de um for
    extern void bubbleSortInt(int *arr, int size);
    extern void bubbleSortFloat(float *arr, int size);
    extern void bubbleSortDouble(double *arr, int size); 

    //quick sorts para arrays unidimenssionais
    //para matriz usar dentro de um for
    extern void quickSortInt(int *arr, int first, int last);
    extern void quickSortFloat(float *arr, int first, int last);
    extern void quickSortDouble(double *arr, int first, int last);
         
    //imprimir array unidimensional
    //para matriz usar dentro de um for
    extern void printIntArray(int *arr, int size);
    extern void printFloatArray(float *arr, int size);
    extern void printDoubleArray(double *arr, int size);
    
    //substiruir itens no array
    extern int updateIntArray(int *arr, int size, int in, int out);
    extern int updateFloatArray(float *arr, int size, float in, float out);
    extern int updateDoubleArray(double *arr, int size, double in, double out);

#endif






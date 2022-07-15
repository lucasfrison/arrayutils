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
    
    //bubble sorts para arrays unidimenssionais
    extern void bubbleSortInt(int*);
    extern void bubbleSortFloat(float*);
    extern void bubbleSortDouble(double*); 

    //quick sorts para arrays unidimenssionais
    extern void quickSortInt(int*, int, int);
    extern void quickSortFloat(float*, int, int);
    extern void quickSortDouble(double*, int, int);
         
#endif






#ifndef ARRAYUTILS_H
#define ARRAYUTILS_H

    #define length(arr) sizeof(arr) / sizeof(arr[0])
    
    #define forEachItem(item, list) \
    for(T * item = list->head; item != NULL; item = item->next)
            
    #define forEach(item, array) \
    for(int keep = 1, \
    count = 0,\
    size = sizeof (array) / sizeof *(array); \
    keep && count != size; \
    keep = !keep, count++) \
    for(item = (array) + count; keep; keep = !keep)
    
    //search for a value inside an array, return the position number       
    extern int searchInt(int*, int, int);
    extern float searchFloat(float*, int, float);
    extern double searchDouble(double*, int, double);
    
    //bubble sorts
    void bubbleSortInt(int*, int);
    void bubbleSortFloat(float*, int);
    void bubbleSortDouble(double*, int);   
         
#endif






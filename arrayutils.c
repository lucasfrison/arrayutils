#include "arrayutils.h"

int searchInt(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;		 
    }
    return -1;          
}

float searchFloat(float *arr, int size, float key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;		 
    }
    return -1;          
}

double searchDouble(double *arr, int size, double key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;		 
    }
    return -1;          
}

void bubbleSortInt(int *arr, int size) {    
    for(int x = 0; x < size - 1; x++){       
        for(int y = 0; y < size - x - 1; y++){          
            if(arr[y] > arr[y + 1]){               
                int temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }    
    }
}    

void bubbleSortFloat(float *arr, int size) {    
    for(int x = 0; x < size - 1; x++){       
        for(int y = 0; y < size - x - 1; y++){          
            if(arr[y] > arr[y + 1]){               
                float temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }    
    }
}

void bubbleSortDouble(double *arr, int size) {    
    for(int x = 0; x < size - 1; x++){       
        for(int y = 0; y < size - x - 1; y++){          
            if(arr[y] > arr[y + 1]){               
                double temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }    
    }
}



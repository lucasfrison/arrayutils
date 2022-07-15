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

int* readIntArray(int size) {
    char input[10];
    int *arr = malloc(size * sizeof(int));
    printf("Entre com %d números:\n", size);
    for (int i = 0; i < size; i++) {
    	printf("\nNúmero %d: ", i + 1);
	scanf("%s", input);    //ler como string impede erros
        arr[i] = atoi(input);  //digitou "a", atribui arr[i] = 0
    }
    return arr;
}

float* readFloatArray(int size) {
    char input[10];
    float *arr = malloc(size * sizeof(float));
    printf("Entre com %d números:\n", size);
    for (int i = 0; i < size; i++) {
    	printf("\nNúmero %d: ", i + 1);
	scanf("%s", input);   //ler como string impede erros
        arr[i] = atoi(input); //digitou "a", atribui arr[i] = 0
    }
    return arr;
}

double* readDoubleArray(int size) {
    char input[10];
    double *arr = malloc(size * sizeof(double));
    printf("Entre com %d números:\n", size);
    for (int i = 0; i < size; i++) {
    	printf("\nNúmero %d: ", i + 1);
	scanf("%s", input);     //ler como string impede erros
        arr[i] = atoi(input);   //digitou "a", atribui arr[i] = 0
    }
    return arr;
}

void bubbleSortInt(int *arr, int size) {    
    for (int x = 0; x < size - 1; x++) {       
        for (int y = 0; y < size - x - 1; y++) {          
            if (arr[y] > arr[y + 1]){               
                int temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }    
    }
}    

void bubbleSortFloat(float *arr, int size) {    
    for (int x = 0; x < size - 1; x++) {       
        for (int y = 0; y < size - x - 1; y++) {          
            if (arr[y] > arr[y + 1]) {               
                float temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }    
    }
}

void bubbleSortDouble(double *arr, int size) {  
    for (int x = 0; x < size - 1; x++) {       
        for (int y = 0; y < size - x - 1; y++) {          
            if (arr[y] > arr[y + 1]) {               
                double temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }    
    }
}

void quickSortInt(int *arr, int first, int last) {
    
   int i, j, pivot, temp;
    
   if(first < last){
       
      pivot = first;
      i = first;
      j = last;
       
      while(i<j){
         while(arr[i] <= arr[pivot] && i < last) i++;
         while(arr[j] > arr[pivot]) j--;
         if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
       
      temp = arr[pivot];
      arr[pivot] = arr[j];
      arr[j] = temp;
      quickSortInt(arr, first, j - 1);
      quickSortInt(arr, j + 1, last);
   }
}

void quickSortFloat(float *arr, int first, int last) {
    
   int i, j, pivot, temp;
    
   if(first < last){
       
      pivot = first;
      i = first;
      j = last;
       
      while(i<j){
         while(arr[i] <= arr[pivot] && i < last) i++;
         while(arr[j] > arr[pivot]) j--;
         if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
       
      temp = arr[pivot];
      arr[pivot] = arr[j];
      arr[j] = temp;
      quickSortFloat(arr, first, j - 1);
      quickSortFloat(arr, j + 1, last);
   }
}

void quickSortDouble(double *arr, int first, int last) {
    
   int i, j, pivot, temp;
    
   if(first < last){
       
      pivot = first;
      i = first;
      j = last;
       
      while(i<j){
         while(arr[i] <= arr[pivot] && i < last) i++;
         while(arr[j] > arr[pivot]) j--;
         if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
       
      temp = arr[pivot];
      arr[pivot] = arr[j];
      arr[j] = temp;
      quickSortDouble(arr, first, j - 1);
      quickSortDouble(arr, j + 1, last);
   }
}

void printIntArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("\nPosição %d: %d", i, arr[i]);       
} 

void printFloatArray(float *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("\nPosição %d: %.2f ", i, arr[i]);
} 

void printDoubleArray(double *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("\nPosição %d: %.2f ", i, arr[i]);
} 

int updateIntArray(int *arr, int size, int in, int out) {
	int replaced = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == out) {
			arr[i] = in;
			replaced++;
		}
	}	
	
	return replaced;		
}

int updateFloatArray(float *arr, int size, float in, float out) {
	int replaced = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == out) {
			arr[i] = in;
			replaced++;
		}
	}	
	
	return replaced;		
}

int updateDoubleArray(double *arr, int size, double in, double out) {
	int replaced = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == out) {
			arr[i] = in;
			replaced++;
		}
	}
	
	return replaced;		
}



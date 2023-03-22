#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//swaps x and y
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// implement bubble sort
void bubbleSort(int array[], int size){
    for(int i=0; i<size; i++){
        int num_swaps = 0;
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
                swap(&array[j], &array[j+1]);
                num_swaps++;
            }
        }
    printf("Iteration #%d: %d\n", i, num_swaps);
    }
}

int main(){
    int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(array, 9);
}
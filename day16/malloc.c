#include <stdio.h>
#include<stdlib.h>

int main() {

    // int arr[10]; // Static Memory Allocation
    int* arr;
    arr = (int*)malloc(5 * sizeof(int));


    free(arr);
    
    return 0;
}

/*
    Dynamic Memory Allocation
        -malloc
        -calloc
        -free
        -realloc

*/
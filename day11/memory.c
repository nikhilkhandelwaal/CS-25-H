#include <stdio.h>

int main() {

    int arr[] = { 10,20,30,40,50 };
    int* arrPtr = &arr;
    // printf("%u\n", &arr);
    // printf("%u\n", &arr[0]);
    // printf("%u\n", &arr[1]);
    // printf("%u\n", &arr[2]);
    // printf("%u\n", &arr[3]);
    // printf("%u\n", &arr[4]);

    for (int i = 0; i < 5; i++) {
        printf("%u\n", *arrPtr);
        arrPtr++;
    }1

    // int* aPtr = &arr[0];
    // printf("%u\n", aPtr);
    // aPtr++;
    // printf("%u\n", aPtr);

    return 0;
}

/*
    Contigeous Memory location

*/
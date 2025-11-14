#include <stdio.h>

void arraySum(int* arrAdd, int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += *(arrAdd + i);
    }
    printf("%d\n", sum);
}

int main() {

    // int a = 11;
    // int arr[] = { 10,20,30,40,50 };
    // printf("%d\n", a);
    // printf("%u\n", arr);
    // printf("%u\n", &arr[0]);

    int arr[] = { 10,20,30,40,50 };
    int count = sizeof(arr) / sizeof(arr[0]);

    arraySum(arr, count);



    return 0;
}
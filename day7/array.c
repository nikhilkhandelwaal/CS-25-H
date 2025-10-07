#include <stdio.h>

int main() {

    // int arr[5] = { 10,20,30,40,50 };
    // float arr1[5] = { 5.5,3.2,2.1,3.6,1.3 };
    // char arr2[5] = { 'a','b','c','d','e' };
    // double arr3[5] = { 5.5,3.2,2.1,3.6,1.3 };

    // printf("%d", sizeof(arr));
    // printf("%d", sizeof(arr1));
    // printf("%d", sizeof(arr2));
    // printf("%d", sizeof(arr3));

    // int arr[7] = { 10,20,30,40,50 };
    // printf("%d", arr[0]);
    // printf("%d", arr[1]);
    // printf("%d", arr[2]);
    // printf("%d", arr[3]);
    // printf("%d", arr[4]);
    // printf("%d", arr[5]);

    // int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // int arr[5];

    // printf("Enter first value: ");
    // scanf("%d", &arr[0]);
    // printf("Enter second value: ");
    // scanf("%d", &arr[1]);
    // printf("Enter third value: ");
    // scanf("%d", &arr[2]);
    // printf("Enter fourth value: ");
    // scanf("%d", &arr[3]);
    // printf("Enter fifth value: ");
    // scanf("%d", &arr[4]);


    // int arr[5];
    // for (int i = 0; i < 5; i++) {
    //     printf("Enter value: ");
    //     scanf("%d", &arr[i]);
    // }

    int arr[] = { 5,7,8,9,2,4,3,6,7,5,6,7,6 };

    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }




    return 0;
}

// Count the even and Odd number from array
// Copy elements from one array to another new array
// Reverse an array with using another array
// Reverse an array without using another array
// Check wheather array is palindrome or not ?
// 
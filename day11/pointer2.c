#include <stdio.h>

int main() {

    int a = 10;

    int* aPtr = &a;
    int** aaPtr = &aPtr;

    printf("%d\n", a); // Value of varible
    printf("%u\n", &a); // Address of varible a
    printf("%u\n", aPtr); // Address of a
    printf("%u\n", &aPtr); // address of aPtr
    printf("%u\n", aaPtr); // address of aPtr
    printf("%d\n", *aPtr); // value of a
    printf("%u\n", &aaPtr);// address of aaPtr
    printf("%u\n", *aaPtr); // value of aPtr / address of a
    printf("%d\n", **aaPtr);// value of a


    return 0;
}
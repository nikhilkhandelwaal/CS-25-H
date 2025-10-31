#include <stdio.h>

int main() {

    int a = 10; // 1000
    int b = 20;

    int* aPtr = &a;
    int* bPtr = &b;

    printf("%d\n", a);
    printf("%u\n", &a);
    printf("%u\n", aPtr);
    printf("%d\n", b);
    printf("%u\n", &b);
    printf("%u\n", bPtr);
    printf("%d\n", *aPtr);

    *aPtr = 15;
    *bPtr = 25;

    (*aPtr)++;

    printf("%d\n", a);
    printf("%d\n", b);



    return 0;
}

/*
    Pointer
        Varible name, Varible Value, varible address

    a => Value of varible
    &a => Address of Varible
    *aPtr => value at that address(value of varible a)
    *aPtr = a

*/
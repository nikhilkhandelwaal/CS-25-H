#include <stdio.h>

void sum(int* num1) {
    *num1 = 20;
}

int main() {

    int a = 10;

    printf("%u\n", &a);
    
    printf("Before Passing: %d\n", a);

    sum(&a); // Function calling

    printf("After Passing: %d\n", a);


    return 0;
}

/*
    Pass by Values

*/
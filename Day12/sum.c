#include <stdio.h>

void sum(int num1, int num2) {
    // num1 and num2 called parameters
    printf("%d\n", num1 + num2);
}

int main() {

    int a = 10;
    int b = 20;
    sum(a, b); // a & b called arguments
    sum(15, 25); // 15 & 25 called arguments
    sum(25, 50); // 25 & 50 called arguments
    sum(5, 7);// 5 & 7 called arguments


    return 0;
}
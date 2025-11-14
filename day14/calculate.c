#include <stdio.h>

void calculate(int a, int b, int* sum, int* subs) {
    *sum = a + b;
    *subs = a - b;
}


int main() {

    int a = 10;
    int b = 20;
    int sum, subs;

    calculate(a, b, &sum, &subs);
    printf("Sum is %d\n",sum);
    printf("Subs is %d\n",subs);

    return 0;
}
#include <stdio.h>

void printValue() {

    extern int a;

    printf("%d\n", a);
}

int a = 10;

int main() {

    printValue();

    return 0;
}

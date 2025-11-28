#include <stdio.h>

void printValue() {
    static int a = 10;
    a++;
    printf("%d\n", a);
}

int main() {

    printValue();
    printValue();
    printValue();

    return 0;
}

/*
    Storage Classess
        Auto, Static, register, extern


*/
#include <stdio.h>

void table(int num) {

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i * num);
    }
    printf("\n");

}

int main() {

    int a = 10;
    table(a);
    table(25);
    table(5);
    table(7);
    table(9);


    return 0;
}
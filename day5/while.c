#include<stdio.h>

int main() {

    // for (int i = 1; i <= 10; i++) {

    // }

    int i = 1;
    while (i <= 10) {
        printf("%d\n", i * 2);
        printf("Enter new value of i: ");
        scanf("%d", &i);
    }


    return 0;
}
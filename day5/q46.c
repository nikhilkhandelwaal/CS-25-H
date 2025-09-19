#include<stdio.h>

int main() {

    int number, flag = 1;
    // flag =1 => Prime  flag=0 => Not Prime
    printf("Enter the number: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("It is prime Number");
    }
    else {
        printf("It is not prime Number");
    }

    return 0;
}
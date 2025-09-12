#include<stdio.h>
int main() {

    int number;
    printf("Enter the numbe: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("It is positive number");
    }
    else if (number < 0) {
        printf("It is negative number");
    }
    else {
        printf("Number is zero");
    }

    return 0;
}
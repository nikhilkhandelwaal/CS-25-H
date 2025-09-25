#include<stdio.h>

int main() {

    int number, lastDigit, reverseNum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);

    while (number != 0) {
        lastDigit = number % 10;// 1
        number = number / 10; // 0
        reverseNum = reverseNum * 10 + lastDigit; //321
    }

    printf("%d", reverseNum);

    return 0;
}

// 0 1 1 2 3 5 8 13 21 34 
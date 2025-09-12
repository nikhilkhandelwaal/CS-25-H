#include<stdio.h>
int main() {

    char letter;
    printf("Enter chracter: ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("It is vowel");
    }
    else {
        printf("It is Consonant");

    }

    return 0;
}
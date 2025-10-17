#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main() {

    // char arr[] = { 'h','e','l','l','o','\0' };

    // char arr1[] = "Hello";

    // printf("%d", sizeof(arr1));

    // char arr[] = { 'h','e','l','l','o','\0' };
    // int count = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < count; i++) {
    //     printf("%c\n", arr[i]);
    // }

    // printf("%s", arr);

    // char arr[100];

    // printf("Enter your name: ");
    // // scanf("%s", arr);
    // fgets(arr, 100, stdin);
    // printf("Your name is %s", arr);



    // char letter = 'A';

    // printf("%c", tolower(letter));

    // char letter = 'b';
    // printf("%c", toupper(letter));

    // char name[] = "Hello";
    // for (int i = 0; i < 5; i++) {
    //     printf("%c", toupper(name[i]));
    // }

    char name[] = "Hello"; // 6
    char arr[] = "Everyone"; // 9

    // printf("%d", strlen(name));
    // strcpy(name, arr);

    strcat(name, arr);
    printf("%s", name);



    return 0;
}

/*
    \0 => null operator
    fgets(varibleName, varibleSize, stdin);
    ctype.h => tolower, toupper
    string.h =>strlen, strcpy, strcat


*/
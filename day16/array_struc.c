#include <stdio.h>
#include<string.h>

struct user {
    char name[100];
    int age;
    float height;
};


int main() {

    struct user userData[5];

    userData[0].age = 25;
    userData[0].height = 5.5;
    strcpy(userData[0].name, "Hello");

    userData[1].age = 35;
    userData[1].height = 4.5;
    strcpy(userData[1].name, "Welcome");

    userData[2].age = 50;
    userData[2].height = 6.5;
    strcpy(userData[2].name, "Everyone");

    for (int i = 0; i < 3; i++) {
        printf("Name is : %s\n", userData[i].name);
        printf("Age is :%d\n", userData[i].age);
        printf("Height is :%f\n", userData[i].height);
    }



    return 0;
}
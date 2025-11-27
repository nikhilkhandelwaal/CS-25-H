#include <stdio.h>

union user {
    char name[71];
    int age;
    float height;
};


int main() {

    printf("%d\n", sizeof(union user));

    return 0;
}

/*
    Predefined Data type
        int, char, float

    User Defined Data type
        Structure and Uninon

*/
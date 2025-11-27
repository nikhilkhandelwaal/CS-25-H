#include <stdio.h>

struct user {
    char name[100];
    int age;
    float height;
};

void updateValue(struct user* userInfo) {
    userInfo->age = 30;
    printf("Inside Function: %d\n", userInfo->age); //30
}


int main() {
    struct user user1 = { "Hello",25,5.5 };

    printf("Before: %d\n", user1.age); // 25
    updateValue(&user1); // 
    printf("After: %d\n", user1.age);  // 30


    return 0;
}
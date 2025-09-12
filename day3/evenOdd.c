#include<stdio.h>
int main() {

    int devices; //15
    printf("Enter number of devices On: ");
    scanf("%d", &devices);

    if (devices % 2 == 0) { // 16%2==0 =>0==0
        printf("Even Devices");
    }
    else {
        printf("Odd Devices");
    }

    return 0;
}
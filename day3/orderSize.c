#include<stdio.h>
int main() {

    int orderSize;

    printf("Enter order size: ");
    scanf("%d", &orderSize);

    if (orderSize % 3 == 0 && orderSize % 5 == 0) {
        printf("Offer is On");
    }
    else {
        printf("Offer is not valid");
    }

    return 0;
}
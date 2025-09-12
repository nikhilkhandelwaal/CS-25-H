#include<stdio.h>
#include<math.h>

int main() {

    int base, height;
    float hypotenuse;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter height: ");
    scanf("%d", &height);


    hypotenuse = sqrt((base * base) + (height * height));

    printf("Hypoternuse is %f", hypotenuse);


    return 0;
}
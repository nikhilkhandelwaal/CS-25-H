#include<stdio.h>

int main() {

    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
        // sum = 0+1 => sum =1
        // sum = 1+2 => sum =3
        // sum = 3+3 => sum =6
        // sum = 6+4 => sum =10
        // sum = 10+5 => sum =15
        // sum = 15+6 => sum =21
        // sum = 21+7 => sum =28
        // sum = 28+8 => sum =36
        // sum = 36+9 => sum =45
        // sum = 45+10 => sum =55
    }
    printf("%d", sum);

    return 0;
}
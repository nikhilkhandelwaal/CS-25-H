#include<stdio.h>

int main() {

    int x = 5, y = 10, z = 0;
    if (++x > 6 && ++y > 10 && ++z > -1) {
        printf("X=%d, Y=%d, Z=%d\n", x, y, z);
    }
    if (--x == 5 || --y == 9) {
        printf("Final: X=%d, Y=%d", x, y);
    }

    return 0;
}

/* 5,10,0,5,9     5,11    5,9    

*/
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (i > j)
                break;
            printf("%d%d ", i, j);
        }
        printf("\n");
    }
    return 0;
}
//  21,31,32      21     blank   
// 11 12 13 23    12 13 23
#include <stdio.h>
int main() {
    int i = 5;
    while (i > 0) {
        printf("%d ", --i);
        if (i == 2) {
            i--;
            continue;
        }
    }
    return 0;
}
// 4,3,2    4,3    
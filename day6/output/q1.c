#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            i += 2;
            continue;
        }
        if (i > 7)
            break;
        printf("%d ", i);
    }
    return 0;
}
// 1,2        
//
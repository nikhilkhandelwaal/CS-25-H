#include<stdio.h>
int main() {

    int score1, score2;
    printf("ENter first score: ");
    scanf("%d", &score1);
    printf("ENter second score: ");
    scanf("%d", &score2);

    if (score1 > score2) {
        printf("Largest score is %d", score1);
    }
    else {
        printf("Largest score is %d", score2);
    }

    return 0;
}
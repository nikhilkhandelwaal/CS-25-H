#include<stdio.h>
int main() {

    int marks1, marks2, marks3, total;

    printf("Enter first student marks: ");
    scanf("%d", &marks1);
    printf("Enter second student marks: ");
    scanf("%d", &marks2);
    printf("Enter third student marks: ");
    scanf("%d", &marks3);

    total = marks1 + marks2 + marks3;

    printf("Average Marks: %f", total / 3.0);

    return 0;
}
//Result of equation

#include <stdio.h>
int main() {
    int A, B, C, D;
    int X;

    printf("Enter four numbers (A, B, C, D): ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    X = (A * B) - (C * D);

    printf("The result of the equation X = (A * B) - (C * D) is: %d\n", X);

    return 0;
}
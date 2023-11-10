// calculation max & min number

#include <stdio.h>
int main() {
    int A, B, C;
    int min, max;

    printf("Enter three numbers (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

    //The minimum number
    min = A;
    if (B < min) {
        min = B;
    }
    if (C < min) {
        min = C;
    }

    //The maximum number
    max = A;
    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}
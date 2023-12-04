#include <stdio.h>

int main(){
    int A, B, C, D;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d", &A, &B, &C, &D);

    int x = A*B*C*D;
    int y = x % 100;
    printf("The Last Two Digits Are: %d", y);

    return 0;
}
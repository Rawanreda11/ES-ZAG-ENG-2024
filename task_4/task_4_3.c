#include <stdio.h>

int main() {
    int dNum, bNum = 0, i = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &dNum);
    while (dNum != 0) {
        remainder = dNum % 2;
        dNum /= 2;
        bNum += remainder * i;
        i *= 10;
    }
    printf("Binary number: %d\n", bNum);
    return 0;
}
#include <stdio.h>
//reverse a number
int main() {
    int num, reverseNum = 0;
    printf("Enter the number: \n");
    scanf("%d", &num);
    while(num > 0){
        reverseNum = reverseNum *10 +(num % 10);
        num /= 10;
    }
    printf("%d", reverseNum);


    return 0;
}
// int main() {
//     int x;
//     printf("Enter the No of numbers: ");
//     scanf("%d", &x);

//     int arr[x];

//     printf("Enter %d integers:\n", x);
//     for (int i=0; i<x; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Numbers you enterd in reversed representation: \n");
//     for (int j=x-1; j>-1 ; j--) {
//         printf("%d ", arr[j]);
//     }

//     return 0;
// }

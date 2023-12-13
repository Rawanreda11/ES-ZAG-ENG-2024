#include <stdio.h>

int main() {
    int n;
    printf("Enter the No of integers and values:\n");
    scanf("%d", &n);

    int arr[n];
    for(int i =0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    for(int j = 0; j < n; j++){
        sum = sum + arr[j];
    }
    printf("Sum of integers are: %d\n", sum);

    return 0;
}
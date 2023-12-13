#include <stdio.h>

int main() {
    printf("Enter 10 values:\n");
    int arr[10];
    for(int i =0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    
    int x = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    
    for(int j = 1; j < x; j++){
        if(arr[j] > max){
            max = arr[j];
        }
        if(arr[j] < min){
            min = arr[j];
        }
    }
    printf("Maximum value is: %d\n", max);
    printf("Minimum value is: %d\n", min);

    return 0;
}
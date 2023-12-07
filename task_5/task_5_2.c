#include <stdio.h>

void main(){
    int num;
    printf("Enter A Number:\n");
    scanf("%d", &num);
    if(num > 0){
        for(int i = 2; i <= num/2; i++){
            if((num % i) != 0){
                printf("%d is prime", num);
            }
            if((num % i) == 0){
                printf("%d is not prime", num);
            }
        }
    }
    else if(num < 0){
        printf("Please Enter a positive number!");
    }
    if(num == 0 || num == 2){
        printf("%d is prime", num);
    }
}
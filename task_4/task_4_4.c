#include <stdio.h>

int main(){
    int num , count=0;
    printf("Enter an unsigned number:\n");
    scanf("%d", &num);

    while (num > 0){
        count += num & 1;
        num >>=1;
    }
    printf("sum is: %d", count);
    
    return 0;
}
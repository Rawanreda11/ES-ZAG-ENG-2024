#include <stdio.h>

int main(){
    int num ;
    int fact=1;
    int i =1;
    scanf("%d",&num);
    while(i <= num){
        fact *= i;
        i++;
    }
    printf("%d",fact);
}
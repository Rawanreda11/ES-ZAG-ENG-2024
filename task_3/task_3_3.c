#include <stdio.h>

int main(){
    int num, exp;
    scanf("%d%d",&num,&exp);
    
    int result = 1;
    for(int i=0; i<exp; i++){
        result *= num;
    }
    printf("%d",result);
}
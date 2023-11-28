#include <stdio.h>

int main(){
    int rows = 7;
    for(int i=0; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}
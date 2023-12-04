#include <stdio.h>

//number and a character
int main() {
    int num;
    char letter;

    printf("Enter a number & a character: \n");
    scanf("%d %c", &num,&letter);
    if(num %2 ==0 ){
        printf("%c", letter);
    }
    else{
        if(letter >= 'a' && letter <='z'){
            printf("The other case of Letter: %c\n", letter-32);
        }
        else if(letter >= 'A' && letter <='Z'){
            printf("The other case of Letter: %c\n", letter+32);
        }
    }
    return 0;
}
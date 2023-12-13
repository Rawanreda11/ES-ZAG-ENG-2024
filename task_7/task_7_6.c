#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Words of sentence:\n");

    for(int i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c", sentence[i]);
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int count = 0;
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    int n = sizeof(sentence);
    int freq[10] = {0};
    printf("frequency of digits:\n");

    char ch = '0';
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < n; j++){
            if (sentence[j] == ch){
                    count++;
            }
        }
        printf("%d ", count);
        count = 0;
        ch++;
    }
    
    return 0;
}
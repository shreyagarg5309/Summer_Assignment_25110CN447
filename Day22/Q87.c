//character frequency
#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int freq[256] = {0}, len;

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for (int i = 0; i < len; i++){
        freq[str[i]]++; 
    }
    
    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    
    return 0;
}
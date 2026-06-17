//find character occuring max
#include <stdio.h>
#include<string.h>

int main() {
    char str[100], maxChar;
    int freq[256] = {0}, len;

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for (int i = 0; i < len; i++){
        freq[str[i]]++; 
    }

    int maxCount = freq[0];
    for(int i = 0; i < 256; i++){
        if(freq[i] > maxCount){
            maxCount = freq[i];
            maxChar = i;
        }
    }
    
    printf("'%c' : %d\n", maxChar, maxCount);
    
    return 0;
}
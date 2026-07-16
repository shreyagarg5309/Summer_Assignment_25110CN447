//first non repeating character
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

    int found = 0;
    
    for (int i = 0; i < len; i++) {
        if (freq[str[i]] == 1) {
            printf("First non repeating character: %c", str[i]);
            found = 1;
            return 0;
        }
    }

    if(found == 0){
        printf("All characters are repeating");
    }
    
    return 0;
}

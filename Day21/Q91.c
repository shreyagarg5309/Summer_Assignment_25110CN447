//check anagram strings
#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[100], str2[100];
    
    int count[256] = {0}, flag = 1; 

    printf("String 1: \n");
    gets(str1);

    printf("String 2: \n");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        flag = 0; 
    } 
    else {
        for (int i = 0; str1[i] != '\0'; i++) {
            count[(int)str1[i]]++;
            count[(int)str2[i]]--;
        }

        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
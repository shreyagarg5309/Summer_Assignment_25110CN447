#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter the 1st string: ");
    gets(str1);
    printf("Enter the 2nd string: ");
    gets(str2);
    
    printf("THE COMMON CHARACTERS IN THE STRINGS ARE:\n");
    while(str1[i] != '\0'){
        j = 0;
        while(str2[j] != '\0'){
            if(str1[i] == str2[j]){
                printf("%c ", str2[j]);
                break;
            }
            j++;
        }
        i++;
    }
    
    return 0;
}
//compress the string
#include <stdio.h>

int main() {
    char str[100], ch, resultStr[100];
    int len, count;

    printf("Enter the string: ");
    gets(str);

    int i = 0, j = 0;
    while(str[i] != '\0'){
        ch = str[i];
        count = 0;

        while(str[i] == ch){
            count++;
            i++;
        }

        resultStr[j++] = ch;
        if(count > 1){
            char count1 = count + '0';
            resultStr[j] = count1;
            j++;
        }
    }
    resultStr[j] = '\0';

    printf("The compressed string is: %s", resultStr);
    
    return 0;
}

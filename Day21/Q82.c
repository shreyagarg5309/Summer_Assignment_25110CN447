//reverse string
#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int len;

    printf("Enter the string: ");
    scanf("%s", str);
    len = strlen(str);

    int i = len - 1;
    int j = 0;

    while(i >= 0){
        int temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i--;
        j++;
    }
    str[j] = '\0';

    printf("Reversed string is: %s", str);

    return 0;
}

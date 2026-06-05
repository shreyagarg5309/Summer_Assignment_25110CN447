//print hollow rectangle
#include<stdio.h>

int main(){

    int num;

    printf("Enter the no of rows: ");
    scanf("%d", &num);

    printf("\n");

    printf("*****\n");

    for(int i = 1; i <= num; i++){
        printf("*   *\n");  
    }

    printf("*****\n");
    printf("\n");

    return 0;
}

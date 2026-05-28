#include<stdio.h>

int main(){

    int num, result = 0;

    printf("Enter the no: ");
    scanf("%d",&num);

    printf("MULTIPLICATION TABLE OF %d\n", num);

    for(int i = 1; i <= 10; i++){
        result = num*i; 
        printf("%d * %d = %d\n", num,i,result);
        result = 0;
    }

    return 0;
}
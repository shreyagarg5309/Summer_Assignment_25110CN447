//No of digits
#include<stdio.h>

int main(){

    int num, remain = 0, count = 0;

    printf("Enter the no: ");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        remain = num % 10;
        count++;
        num = num/10;
    }

    printf("The no of digits are: %d", count);

    return 0;
}

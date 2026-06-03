//recursive reverse
#include<stdio.h>

int reverse(int n);
int reverseHelp(int n, int rev);

int main(){
    
    int num, result;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = reverse(num);

    printf("The reverse of entered no is: %d", result);

    return 0;
}

int reverseHelp(int n, int rev){

    int remain;

    if(n == 0){
        return rev;
    }

    remain = n % 10;
    rev = (rev * 10) + remain;

    return reverseHelp(n/10, rev);

}

int reverse(int n){
    return reverseHelp(n, 0);
}

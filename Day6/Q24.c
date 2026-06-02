//power without using 'pow' function
#include<stdio.h>

int main(){
    
    int num, n, ans = 1;

    printf("Enter the base no: ");
    scanf("%d", &num);

    printf("Enter the power no: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        ans = ans * num;
    }

    printf("The answer is: %d", ans);

    return 0;
}

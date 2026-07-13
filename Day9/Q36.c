//print hollow rectangle
#include<stdio.h>

int main(){

    int num;

    printf("Enter the no of rows: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(i == 1 || i == row || j == 1 || j == row){
                System.out.print("* ");
            }
            else{
                System.out.print("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

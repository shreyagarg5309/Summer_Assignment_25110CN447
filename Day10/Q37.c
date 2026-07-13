//star pyramid
#include<stdio.h>

int main(){

    int num;

    printf("Enter the no of rows: ");
    scanf("%d", &num);

    int numSpace = row - 1, numStar = 1;
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= numSpace; j++){
            printf(" ");
        }

        for(int j = 1; j <= numStar; j++){
            printf("* ");
        }
        printf("\n");
        numStar += 2;
        numSpace--;
    }

    return 0;
}

//diagional sum
#include<stdio.h>

int main(){

    int row, column, rightDiag = 0, leftDiag = 0;

    printf("Enter the no of rows in matrix: ");
    scanf("%d", &row);

    printf("Enter the no of columns in matrix: ");
    scanf("%d", &column);

    int mat[row][column];

    printf("ENTER THE ELEMENTS OF MATRIX:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(i == j){
                rightDiag += mat[i][j];
            }
            if(i + j == column - 1){
                leftDiag += mat[i][j];
            }
        }
    }

    printf("The sum of right diagonal elements is: %d", rightDiag);
    printf("The sum of left diagonal elements is: %d", leftDiag);

    return 0;
}
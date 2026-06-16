//row-wise sum
#include<stdio.h>

int main(){

    int row, column, rowSum = 0;

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
        rowSum = 0;
        for(int j = 0; j < column; j++){
            rowSum += mat[i][j];
        }
        printf("The sum of row %d is: %d\n", i + 1, rowSum);
    }

    return 0;
}
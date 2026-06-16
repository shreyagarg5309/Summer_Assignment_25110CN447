//column-wise sum
#include<stdio.h>

int main(){

    int row, column, columnSum = 0;

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

    for(int i = 0; i < column; i++){
        columnSum = 0;
        for(int j = 0; j < row; j++){
            columnSum += mat[j][i];
        }
        printf("The sum of column %d is: %d\n", i + 1, columnSum);
    }

    return 0;
}
//check symmetric matrix
#include<stdio.h>

int main(){

    int row, column;

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
            if(mat[i][j] != mat[j][i]){
                printf("The entered matrix is not symmetric");
                return 0;
            }
        }
    }

    printf("The entered matrix is symmetric");

    return 0;
}
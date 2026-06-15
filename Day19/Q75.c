//transpose matrix
#include<stdio.h>

int main(){

    int row, column;

    printf("Enter the no of rows in matrix: ");
    scanf("%d", &row);

    printf("Enter the no of columns in matrix: ");
    scanf("%d", &column);

    int mat[row][column], resultMat[row][column];

    printf("ENTER THE ELEMENTS OF MATRIX:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            resultMat[i][j] = mat[j][i];
        }
    }

    printf("THE ELEMENTS OF RESULTANT TRANSPOSED MATRIX:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", resultMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
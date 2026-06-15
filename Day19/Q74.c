//subtract matrix
#include<stdio.h>

int main(){

    int row, column;

    printf("Enter the no of rows in matrix: ");
    scanf("%d", &row);

    printf("Enter the no of columns in matrix: ");
    scanf("%d", &column);

    int mat1[row][column], mat2[row][column], resultMat[row][column];

    printf("ENTER THE ELEMENTS OF 1ST MATRIX:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("ENTER THE ELEMENTS OF 2ND MATRIX:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            resultMat[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("THE ELEMENTS OF RESULTANT MATRIX:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", resultMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
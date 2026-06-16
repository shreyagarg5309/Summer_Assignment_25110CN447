//multiply matrix
#include<stdio.h>

int main(){

    int row1, column1, row2, column2;

    printf("Enter the no of rows in 1st matrix: ");
    scanf("%d", &row1);

    printf("Enter the no of columns in 1st matrix: ");
    scanf("%d", &column1);

    printf("Enter the no of rows in 2nd matrix: ");
    scanf("%d", &row2);

    printf("Enter the no of columns in 2nd matrix: ");
    scanf("%d", &column2);

    int mat1[row1][column1], mat2[row2][column2], resultMat[row1][column2];

    if(row2 != column1){
        printf("the matrices cant be multiplied");
        return 0;
    }
    else{
        printf("ENTER THE ELEMENTS OF 1ST MATRIX:\n");
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column1; j++){
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("ENTER THE ELEMENTS OF 2ND MATRIX:\n");
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < column2; j++){
                scanf("%d", &mat2[i][j]);
            }
        }

        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column2; j++){
                resultMat[i][j] = 0;
                for(int k = 0; k < column1; k++){
                    resultMat[i][j] += (mat1[i][k] * mat2[k][j]);
                }
            }
        }
    }

    printf("THE ELEMENTS OF RESULTANT MATRIX:\n");
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < column2; j++){
            printf("%d ", resultMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
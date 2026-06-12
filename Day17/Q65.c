//merge arrays
#include<stdio.h>

int main(){

    int num1, num2, flag = 0;

    printf("Enter the no of elements in 1st array: ");
    scanf("%d", &num1);

    printf("Enter the no of elements in 2nd array: ");
    scanf("%d", &num2);

    int arr1[num1], num3 = num1 + num2;

    printf("ENTER THE ELEMENTS OF 1ST ARRAY:\n");
    for(int i = 0; i < num1; i++){
        scanf("%d", &arr1[i]);
    }

    int arr2[num2];
    printf("ENTER THE ELEMENTS OF 2ND ARRAY:\n");
    for(int i = 0; i < num2; i++){
        scanf("%d", &arr2[i]);
    }

    int resultArray[num3];
    for(int i = 0; i < num1; i++){
        resultArray[i] = arr1[i];
        flag++;
    }

    for(int i = 0;  i < num2; i++){
        resultArray[flag] = arr2[i];
        flag++;
    }

    printf("THE MERGED ARRAY IS:\n");
    for(int i = 0; i < num3; i++){
        printf("%d ", resultArray[i]);
    }

    return 0;
}
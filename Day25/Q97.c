#include<stdio.h>

int main(){

    int num1, num2, temp;

    printf("Enter the no of elements in 1st array: ");
    scanf("%d", &num1);
    printf("Enter the no of elements in 1st array: ");
    scanf("%d", &num2);

    int arr1[num1], arr2[num2], resultArr[num1 + num2];

    printf("ENTER THE ELEMENTS OF 1ST SORTED ARRAY:\n");
    for(int i = 0; i < num1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("ENTER THE ELEMENTS OF 2ND SORTED ARRAY:\n");
    for(int i = 0; i < num2; i++){
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;
    while(i < num1 && j < num2){
        if(arr1[i] <= arr2[j]){
            resultArr[k++] = arr1[i++];
        }
        else{
            resultArr[k++] = arr2[j++];
        }
    }

    while(i < num1){
        resultArr[k++] = arr1[i++];
    }
    while(j < num2){
        resultArr[k++] = arr2[j++];
    }

    printf("THE MERGED ARRAY IS:\n");
    for(int i = 0; i < num1 + num2; i++){
        printf("%d ", resultArr[i]);
    }

    return 0;
}
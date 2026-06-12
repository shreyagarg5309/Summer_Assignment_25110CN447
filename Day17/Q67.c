//intersection of arrays
#include<stdio.h>

int main(){

    int num1, num2, flag = 0, isDuplicate;

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
        for(int j = 0; j < num2; j++){
            if(arr1[i] == arr2[j]){
                isDuplicate = 0;
                for(int k = 0; k < flag; k++){
                    if(resultArray[k] == arr1[i]){
                        isDuplicate = 1;
                        break;
                    }
                }
                if(isDuplicate == 0){
                    resultArray[flag] = arr1[i];
                    flag++;
                }
            }
        }
    }

    printf("THE INTERSECTION ARRAY IS:\n");
    for(int i = 0; i < flag; i++){
        printf("%d ", resultArray[i]);
    }

    return 0;
}
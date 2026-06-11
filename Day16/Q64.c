#include<stdio.h>

int main(){

    int num1, found, num2 = 0;

    printf("Enter the no of elements: ");
    scanf("%d", &num1);

    int arr[num1];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num1; i++){
        scanf("%d", &arr[i]);
    }

    int newArr[num1];
    
    for(int i = 0; i < num1; i++){
        found = -1;
        for(int j = 0; j < num2; j++){
            if(arr[i] == newArr[j]){
                found = 1;
                break;
            }
        }

        if(found == -1){
            newArr[num2] = arr[i];
            num2++;
        }
    }

    printf("THE ARRAY WITHOUT DUPLICATES IS:\n");
    for(int i = 0; i < num2; i++){
        printf("%d ", newArr[i]);
    }

    return 0;
}
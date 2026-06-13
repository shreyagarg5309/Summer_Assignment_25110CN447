//Bubble sort
#include<stdio.h>

int main(){

    int num, temp;

    printf("Enter the no of elements in array: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("THE SORTED ARRAY IS:\n");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
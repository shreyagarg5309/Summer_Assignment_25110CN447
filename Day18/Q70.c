//Selection sort
#include<stdio.h>

int main(){

    int num, temp, min, minIndex;

    printf("Enter the no of elements in array: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num - 1; i++){
        min = arr[i];
        minIndex = i;
        for(int j = i + 1; j < num; j++){
            if(min > arr[j]){
                min = arr[j];
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("THE SORTED ARRAY IS:\n");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
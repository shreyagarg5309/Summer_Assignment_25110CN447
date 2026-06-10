#include<stdio.h>

int main(){

    int num;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num], reverseArray[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        reverseArray[i] = arr[num - 1 - i];
    }

    printf("ELEMENTS OF REVERSED ARRAY ARE:\n");
    for(int i = 0; i < num; i++){
        printf("%d ", reverseArray[i]);
    }

    return 0;
}
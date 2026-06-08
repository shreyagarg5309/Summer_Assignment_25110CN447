//input and display array
#include<stdio.h>

int main(){

    int num;

    printf("Enter the no of elements in array: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");

    for(int i = 0; i < num; i++){
        scanf("%d\n", &arr[i]);
    }

    printf("THE ELEMENTS OF ARRAY ARE:\n");

    for(int i = 0; i < num; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
//sum and average of array
#include<stdio.h>

int main(){

    int num, sum = 0, average;

    printf("Enter the no of elements in array: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");

    for(int i = 0; i < num; i++){
        scanf("%d\n", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        sum += arr[i];
    }

    average = sum / num;

    printf("The sum of array elements is: %d\n", sum);
    printf("The average of array elements is: %d", average);

    return 0;
}
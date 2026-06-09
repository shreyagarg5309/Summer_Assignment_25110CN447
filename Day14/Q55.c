#include<stdio.h>

int main(){

    int num, target, largest, secondLargest;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0], secondLargest = arr[1];

    for(int i = 0; i < num; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    printf("Second largest element of array is: %d", secondLargest);
    
    return 0;
}
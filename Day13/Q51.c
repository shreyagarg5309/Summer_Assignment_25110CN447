//smallest and largest of array
#include<stdio.h>

int main(){

    int num, smallest, largest;

    printf("Enter the no of elements in array: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d\n", &arr[i]);
    }

    smallest = arr[0];
    for(int i = 0; i < num; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    largest = arr[0];
    for(int i = 0; i < num; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    printf("%d is smallest and %d is largest", smallest, largest);

    return 0;
}
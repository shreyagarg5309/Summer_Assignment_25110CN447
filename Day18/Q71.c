//binary search
#include<stdio.h>

int main(){

    int num, beg, end, mid, target, position = -1, found = 0;

    printf("Enter the no of elements in array: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF SORTED ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    beg = 0, end = num - 1;
    while(beg <= end){
        mid = (beg + end) / 2;

        if(arr[mid] == target){
            printf("The no %d is present at position no. %d", target, mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < target){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    if(found == 0){
        printf("Element does not exist in the array");
    }

    return 0;
}
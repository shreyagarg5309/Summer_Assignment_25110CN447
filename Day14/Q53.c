//linear search
#include<stdio.h>

int main(){

    int num, target, position = -1;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    for(int i = 0; i < num; i++){
        if(arr[i] == target){
            position = i + 1;
            break;
        }
    }

    if(position == -1){
        printf("%d not found", target);
    }
    else{
        printf("%d is found at index: %d", target, position);
    }
    return 0;
}

#include<stdio.h>

int main(){

    int num, target, frequency = 0;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count occurance: ");
    scanf("%d", &target);

    for(int i = 0; i < num; i++){
        if(arr[i] == target){
            frequency++;
        }
    }

    if(frequency == 0){
        printf("%d not found", target);
    }
    else{
        printf("%d occurs %d times in the array", target, frequency);
    }
    return 0;
}
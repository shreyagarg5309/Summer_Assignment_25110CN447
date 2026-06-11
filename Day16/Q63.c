#include<stdio.h>

int main(){

    int num, targetSum;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum: ");
    scanf("%d", &targetSum);

    printf("PAIRS WITH GIVEN SUM ARE:\n");
    for(int i = 0; i < num; i++){
        int num1 = arr[i];
        for(int j = i + 1; j < num; j++){
            if(arr[i] + arr[j] == targetSum){
                printf("%d + %d = %d\n", arr[i], arr[j], targetSum);
            }
        }
    }

    return 0;
}
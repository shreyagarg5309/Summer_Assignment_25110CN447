//count odd and even
#include<stdio.h>

int main(){

    int num, countOdd = 0, countEven = 0;

    printf("Enter the no of elements in array: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d\n", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        if(arr[i] % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }

    printf("No of even elements are: %d\n", countEven);
    printf("No of odd elements are: %d", countOdd);

    return 0;
}
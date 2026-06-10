//right rotation
#include<stdio.h>

int main(){

    int num, temp;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        temp = arr[0];
        
        for(int j = 0; j < num - 1; j++){
            arr[j] = arr[j + 1];
        }

        arr[num - 1] = temp;

        if(i == num - 1){
            printf("ROTATION %d(ORIGINAL ARRAY):\n", i + 1);
        }
        else{
            printf("ROTATION %d:\n", i + 1);
        }

        for(int j = 0; j < num; j++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}

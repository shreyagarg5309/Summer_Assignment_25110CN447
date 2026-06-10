//move zeroes to the end
#include<stdio.h>

int main(){

    int num, pos = 0;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos++;
        }
    }

    for(int i = pos; i < num; i++){
        arr[i] = 0;
    }

    printf("THE ARRAY WITH ZEROES AT END IS:\n");
    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

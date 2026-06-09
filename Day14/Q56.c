#include<stdio.h>

int main(){

    int num, target, flag = 0;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < num; i++){
        for(int j = i + 1; j < num; j++){
            if(arr[i] == arr[j]){
                printf("%d\n", arr[i]);
                flag++;
            }
        }
    }

    if(flag == 0){
        printf("No duplicate found");
    }
    return 0;
}
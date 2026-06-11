//find max frequency element
#include<stdio.h>

int main(){

    int num, oldFrequency, newFrequency = 0, target;

    printf("Enter the no of elements: ");
    scanf("%d", &num);

    int arr[num];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < num; i++){
        int key = arr[i];
        oldFrequency = 0;
        for(int j = 0; j < num; j++){
            if(arr[j] == key){
                oldFrequency++;
            }
        }

        if(oldFrequency > newFrequency){
            newFrequency = oldFrequency;
            target = arr[i];
        }

    }

    printf("The maximum frequency element is %d, occuring %d times", target, newFrequency);

    return 0;
}

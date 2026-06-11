//find missing no
#include<stdio.h>

int main(){

    int num, n, expectedSum, actualSum = 0, misNum;

    printf("Enter the no of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    num = n + 1;
    expectedSum = (num * (num + 1)) / 2;

    for(int i = 0; i < n; i++){
        actualSum += arr[i];
    }

    misNum = expectedSum - actualSum;

    printf("The missing no is: %d", misNum);

    return 0;
}

#include<stdio.h>

int main(){
    int choice = 0;
    float firstNum, secondNum, result;

    while(choice != 5){
        printf("\n=== MENU CALCULATOR ===\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nEnter the first no: ");
                scanf("%f", &firstNum);
                printf("\nEnter the second no: ");
                scanf("%f", &secondNum);
                result = firstNum + secondNum;
                printf("\nThe addition of entered no is: %f\n", result);
                break;
            case 2:
                printf("\nEnter the first no: ");
                scanf("%f", &firstNum);
                printf("\nEnter the second no: ");
                scanf("%f", &secondNum);
                result = firstNum - secondNum;
                printf("\nThe subtraction of entered no is: %f\n", result);
                break;
            case 3:
                printf("\nEnter the first no: ");
                scanf("%f", &firstNum);
                printf("\nEnter the second no: ");
                scanf("%f", &secondNum);
                result = firstNum * secondNum;
                printf("\nThe multiplication of entered no is: %f\n", result);
                break;
            case 4:
                printf("\nEnter the first no: ");
                scanf("%f", &firstNum);
                printf("\nEnter the second no: ");
                scanf("%f", &secondNum);
                if(secondNum != 0){
                    result = firstNum / secondNum;
                    printf("\nThe division of entered no is: %f\n", result);
                }
                else{
                    printf("Division by 0 is not possible!");
                }
                break;
            case 5:
                printf("\nGoodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter a number between 1 to 5\n");
        }
    }

    return 0;
}
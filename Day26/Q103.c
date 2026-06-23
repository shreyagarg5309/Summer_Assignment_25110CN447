#include<stdio.h>

int main(){

    int pin = 1234, userPin, choice = 0, flag = 0;
    float balance = 10000.00, amount;

    for(int i = 1; i <= 3; i++){
        printf("Enter the pin(3 - %d attempts left): ", i);
        scanf("%d", &userPin);
        if(pin == userPin){
            printf("Correct pin");
            flag = 1;
            break;
        }
        else{
            printf("Worng pin, enter again");
        }
    }
    if(flag == 0){
        printf("Too many failed attempts");
        return 0;
    }

    while(choice != 4){
        printf("Enter the choice number:\n");
        printf("1. Balance\n2. Withdraw\n3. deposit\n4. Exit");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Your balance is: %f", balance);
                break;
            case 2:
                printf("Enter the withdrawal amount: ");
                scanf("%f", &amount);
                if(amount > balance){
                    printf("Insufficient funds");
                }
                else{
                    balance -= amount;
                }
                printf("Please take your cash");
                break;
            case 3:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful");
                break;
            case 4:
                printf("Goodbye!");
                break;
            default:
                printf("Invalid choice! Please try again");
                break;

        }
    }

    return 0;
}
//bank account system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    FILE *fp;
    struct Account a;
    int choice = 0;
    int targetAcc, found;
    float amount;

    while (choice != 5) {
        printf("BANK ACCOUNT SYSTEM\n");
        printf("1. Create New Account\n");
        printf("2. View All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");        
        scanf("%d", &choice);

        switch (choice) {
            
            case 1:
                fp = fopen("bank.dat", "ab"); 
                if (fp == NULL) {
                    printf("Error: Cannot open file!\n");
                    break;
                }

                printf("\nEnter Account Number: ");
                scanf("%d", &a.accNo);
                
                printf("Enter Account Holder Name: ");
                gets(a.name); 
                
                printf("Enter Initial Deposit Amount: ");
                scanf("%f", &a.balance);
                
                fwrite(&a, sizeof(struct Account), 1, fp);
                fclose(fp);
                
                printf("\nAccount Created Successfully! \n");
                break;

            case 2:
                fp = fopen("bank.dat", "rb"); 
                if (fp == NULL) {
                    printf("\nNo accounts found! \n");
                    break;
                }

                printf("\n%-15s %-25s %-15s\n", "Account No", "Name", "Balance");

                while (fread(&a, sizeof(struct Account), 1, fp) == 1) {
                    printf("%-15d %-25s $%-15.2f\n", a.accNo, a.name, a.balance);
                }
                
                fclose(fp);
                break;

            case 3:
                fp = fopen("bank.dat", "rb+");
                if (fp == NULL) {
                    printf("\nNo accounts available\n");
                    break;
                }

                printf("\nEnter Account Number for Deposit: ");
                scanf("%d", &targetAcc);
                
                found = 0;
                while (fread(&a, sizeof(struct Account), 1, fp) == 1) {
                    if (a.accNo == targetAcc) {
                        printf("\nAccount Found! Current Balance: $%.2f\n", a.balance);
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amount);
                        
                        a.balance += amount; 
                     
                        fseek(fp, -(long)sizeof(struct Account), SEEK_CUR);
                        fwrite(&a, sizeof(struct Account), 1, fp);
                        
                        printf("\nDeposit Successful! New Balance: $%.2f\n", a.balance);
                        found = 1;
                        break;
                    }
                }
                
                if (found == 0) {
                    printf("\nAccount Number %d not found!\n", targetAcc);
                }
                
                fclose(fp);
                break;

            case 4:
                fp = fopen("bank.dat", "rb+"); 
                if (fp == NULL) {
                    printf("\nNo accounts available!\n");
                    break;
                }

                printf("\nEnter Account Number for Withdrawal: ");
                scanf("%d", &targetAcc);
                
                found = 0;
                while (fread(&a, sizeof(struct Account), 1, fp) == 1) {
                    if (a.accNo == targetAcc) {
                        printf("\nAccount Found! Current Balance: $%.2f\n", a.balance);
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amount);
                        
                        if (amount > a.balance) {
                            printf("\nTransaction Failed: Insufficient Balance!\n");
                        } else {
                            a.balance -= amount;
                            
                            fseek(fp, -(long)sizeof(struct Account), SEEK_CUR);
                            fwrite(&a, sizeof(struct Account), 1, fp);
                            
                            printf("\nWithdrawal Successful! New Balance: $%.2f\n", a.balance);
                        }
                        found = 1;
                        break;
                    }
                }
                
                if (found == 0) {
                    printf("\nAccount Number %d not found!\n", targetAcc);
                }
                
                fclose(fp);
                break;

            case 5:
                printf("\nExiting Bank System. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5\n");
        }
    } 

    return 0;
}

//student record system using arrays and strings
#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], count = 0, choice = 0, searchRoll, found;
    char name[100][50]; 
    float marks[100];

    while (choice != 4) {
        printf("\n========== STUDENT RECORD SYSTEM ==========\n");
        printf("1. Add a New Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("===========================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("\nEnter Roll Number: ");
                    scanf("%d", &roll[count]);
                    printf("Enter Name: ");
                    gets(name[count]); 
                    printf("Enter Marks: ");
                    scanf("%f", &marks[count]);
                    count++; 
                    printf("Student added successfully!\n");
                } 
                else {
                    printf("Record system is full!\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("\nNo records found. Please add a student first.\n");
                } 
                else {
                    printf("\n--- All Student Records ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("Roll No: %d \t Name: %s \t Marks: %.2f\n", roll[i], name[i], marks[i]);
                    }
                }
                break;
            case 3:
                if (count == 0) {
                    printf("\n--> No records found to search.\n");
                    break;
                }                
                printf("\nEnter Roll Number to search: ");
                scanf("%d", &searchRoll);
                found = 0;                 
                for (int i = 0; i < count; i++) {
                    if (roll[i] == searchRoll) {
                        printf("\n--- Record Found ---\n");
                        printf("Roll No: %d \t Name: %s \t Marks: %.2f\n", roll[i], name[i], marks[i]);
                        found = 1; 
                        break;     
                    }
                }                
                if (found == 0) {
                    printf("\nStudent with Roll Number %d was not found.\n", searchRoll);
                }
                break;
            case 4:
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please select an option from 1 to 4.\n");
        }
    }

    return 0;
}

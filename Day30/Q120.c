//complete mini project using arrays, strings and functions
#include <stdio.h>
#include <string.h>

int main() {
    char directory[100][50], searchName[50]; 
    int count = 0, choice = 0, found;                      

    while(choice != 4){
        printf("\n=== STUDENT DIRECTORY MENU ===\n");
        printf("1. Add Student Name\n");
        printf("2. View All Students\n");
        printf("3. Search for a Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");        
        scanf("%d", &choice);
        while (getchar() != '\n'); 

        switch (choice) {
            
            case 1: 
                if (count >= 100) {
                    printf("Directory is full!\n");
                } 
                else {
                    printf("Enter student name: ");
                    gets(directory[count]); 
                    count++;
                    printf("Student added successfully!\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("No students in the directory yet.\n");
                } 
                else {
                    printf("\n--- List of Students ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. %s\n", i + 1, directory[i]);
                    }
                    printf("------------------------\n");
                }
                break;
            case 3: 
                if (count == 0) {
                    printf("Directory is empty. Nothing to search.\n");
                } 
                else {
                    printf("Enter the name to search: ");
                    gets(searchName);                     
                    found = 0; 
                    for (int i = 0; i < count; i++) {
                        if (strcmp(directory[i], searchName) == 0) {
                            printf("Success: '%s' found at record %d.\n", searchName, i + 1);
                            found = 1; 
                            break;    
                        }
                    }                    
                    if (found == 0) {
                        printf("Student '%s' not found in the directory.\n", searchName);
                    }
                }
                break;
            case 4: 
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } 

    return 0;
}

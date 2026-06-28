//mini employment system
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {

    struct Employee emp[100]; 
    int count = 0, choice = 0, searchId, found;

    while(choice != 4) {
        printf("\n========== MINI EMPLOYEE SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("==========================================\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);
        getchar(); 

        switch(choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[count].id);
                    getchar(); 
                    printf("Enter Employee Name: ");
                    gets(emp[count].name); 
                    printf("Enter Employee Salary: ");
                    scanf("%f", &emp[count].salary);
                    getchar(); 
                    count++;
                    printf("\nEmployee added successfully!\n");
                } 
                else {
                    printf("\nDatabase is full! Cannot add more employees.\n");
                }
                break;
            case 2:
                if (count == 0) {
                    printf("\nNo employees found in the system.\n");
                } 
                else {
                    printf("\n--- Employee List ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Salary: %.2f\n", 
                               emp[i].id, emp[i].name, emp[i].salary);
                    }
                }
                break;
            case 3:
                if (count == 0) {
                    printf("\n--> No employees to search.\n");
                    break;
                }               
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);
                getchar();                
                found = 0; 
                for (int i = 0; i < count; i++) {
                    if (emp[i].id == searchId) {
                        printf("\n--> Employee Found!\n");
                        printf("ID: %d | Name: %s | Salary: %.2f\n", 
                               emp[i].id, emp[i].name, emp[i].salary);
                        found = 1;
                        break; 
                    }
                }                
                if (found == 0) {
                    printf("\nEmployee with ID %d not found.\n", searchId);
                }
                break;
            case 4:
                printf("\nExiting system. Goodbye!\n");
                return 0; 
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

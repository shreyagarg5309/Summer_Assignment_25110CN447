//salary management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int empId;
    char name[50];
    char designation[50];
    float basicSalary;
    float allowances;
    float deductions;
    float netSalary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int choice = 0;
    int targetId, found;

    while (choice != 4) {
        printf("SALARY MANAGEMENT SYSTEM\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. View All Salary Records\n");
        printf("3. Search Employee Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            
            case 1:
                fp = fopen("salary.dat", "ab"); 
                if (fp == NULL) {
                    printf("Error: Cannot open file!\n");
                    break;
                }
                printf("\nEnter Employee ID: ");
                scanf("%d", &e.empId);                
                printf("Enter Employee Name: ");
                gets(e.name);                 
                printf("Enter Designation: ");
                gets(e.designation);                
                printf("Enter Basic Salary: ");
                scanf("%f", &e.basicSalary);               
                printf("Enter Total Allowances (Bonus, Medical, etc.): ");
                scanf("%f", &e.allowances);                
                printf("Enter Total Deductions (Tax, PF, etc.): ");
                scanf("%f", &e.deductions);                
                e.netSalary = e.basicSalary + e.allowances - e.deductions;               
                fwrite(&e, sizeof(struct Employee), 1, fp);
                fclose(fp);                
                printf("Record Added Successfully! Net Salary is %.2f", e.netSalary);
                break;

            case 2:
                fp = fopen("salary.dat", "rb"); 
                if (fp == NULL) {
                    printf("No records found! Please add an employee first");
                    break;
                }

                printf("\n%-5s %-20s %-15s %-10s %-10s %-10s %-10s\n", 
                       "ID", "Name", "Designation", "Basic", "Allow.", "Deduct.", "Net Pay");
                
                while (fread(&e, sizeof(struct Employee), 1, fp) == 1) {
                    printf("%-5d %-20s %-15s %-10.2f %-10.2f %-10.2f %-10.2f\n", 
                           e.empId, e.name, e.designation, e.basicSalary, e.allowances, e.deductions, e.netSalary);
                }
                
                fclose(fp);
                break;

            case 3:
                fp = fopen("salary.dat", "rb"); 
                if (fp == NULL) {
                    printf("\n>>> No records to search! <<<\n");
                    break;
                }

                printf("\nEnter Employee ID to search: ");
                scanf("%d", &targetId);
                
                found = 0;
                while (fread(&e, sizeof(struct Employee), 1, fp) == 1) {
                    if (e.empId == targetId) {
                        printf("Employee Salary Slip");
                        printf("ID          : %d\n", e.empId);
                        printf("Name        : %s\n", e.name);
                        printf("Designation : %s\n", e.designation);
                        printf("Basic Salary: %.2f\n", e.basicSalary);
                        printf("Allowances  : + %.2f\n", e.allowances);
                        printf("Deductions  : - %.2f\n", e.deductions);
                        printf("NET SALARY  : %.2f\n", e.netSalary);
                        
                        found = 1;
                        break; 
                    }
                }
                
                if (found == 0) {
                    printf("Employee with ID %d not found!", targetId);
                }
                
                fclose(fp);
                break;

            case 4:
                printf("\nExiting System\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 4");
        }
    } 

    return 0;
}

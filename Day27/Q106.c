#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Employee{
    int empID;
    char name[50];
    char designation[20];
    float salary;
};

int main(){

    int choice = 0, targetID, found;
    FILE *fp, *tempFp;
    struct Employee s;

    while((getchar()) != '\n'){
        printf("Enter your choice:\n");
        printf("1. Add\n2. Display\n3. Search\n4. Update\n5. Delete\n6. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                fp = fopen("employee.dat", "ab");
                if(fp == NULL){
                    printf("Error!");
                    break;
                }
                printf("Enter employee ID: ");
                scanf("%d", &s.empID);
                printf("Enter Name: ");
                gets(s.name);
                printf("Enter designation: ");
                gets(s.designation);
                printf("Enter salary: ");
                scanf("%f", &salary);
                fwrite(&s, sizeof(struct Employee), 1, fp);
                fclose(fp);
                break;
            case 2:
                fp = fopen("employee.dat", "rb");
                if(fp == NULL){
                    printf("No record found");
                    break;
                }
                printf("\n%-10s %-20s %-15s %-10s\n", "Employee ID", "Name", "Designation", "Salary");
                while (fread(&s, sizeof(struct Employee), 1, fp) == 1) {
                    printf("%-10d %-20s %-15s %-10.2f\n", s.empID, s.name, s.designation, s.salary);
                }
                fclose(fp);
                break;
            case 3:
                fp = fopen("employee.dat", "rb");
                if(fp == NULL){
                    printf("No record found");
                    break;
                }
                printf("Enter the employee ID to be searched: ");
                scanf("%d", &targetID);
                found = 0;
                while(fread(&s, sizeof(struct Employee), 1, fp) == 1){
                    if(s.empID == targetID){
                        printf("Record Found\n");
                        printf("Employee ID : %d\n", s.empID);
                        printf("Name : %s\n", s.name);
                        printf("Designation  : %s\n", s.designation);
                        printf("Salary : %.2f\n", s.salary);
                        found = 1;
                        break;
                    }
                }
                if(found == 0){
                    printf("No such employee found");
                }
                fclose(fp);
                break;
            case 4:
                fp = fopen("employee.dat", "rb+");
                if(fp == NULL){
                    printf("No record found");
                    break;
                }
                printf("Enter the employee ID to update: ");
                scanf("%d", &empID);
                found = 0;
                while (fread(&s, sizeof(struct Employee), 1, fp) == 1) {
                    if (s.empID == targetID) {
                        printf("\nRecord found! Enter new details.\n");
                        
                        printf("Enter New Name: ");
                        gets(s.name);
                        
                        printf("Enter New Designation: ");
                        gets(s.designation); 
                        
                        printf("Enter New Salary: ");
                        scanf("%f", &s.salary);
                        
                        fseek(fp, -(long)sizeof(struct Employee), SEEK_CUR);
                        fwrite(&s, sizeof(struct Employee), 1, fp);
                        
                        printf("Record Updated Successfully!");
                        found = 1;
                        break;
                    }
                }
                
                if (found == 0) {
                    printf("Student with Employee ID %d not found!", targetID);
                }
                fclose(fp);
                break;

            case 5:
                fp = fopen("employee.dat", "rb");
                if (fp == NULL) {
                    printf("No records found");
                    break;
                }
                
                printf("\nEnter Employee ID to delete: ");
                scanf("%d", &targetID);
                
                tempFp = fopen("temp.dat", "wb"); 
                found = 0;
                
                while (fread(&s, sizeof(struct Employee), 1, fp) == 1) {
                    if (s.empID != targetID) {
                        fwrite(&s, sizeof(struct Employee), 1, tempFp);
                    } else {
                        found = 1;
                    }
                }
                
                fclose(fp);
                fclose(tempFp);
                
                if (found == 1) {
                    remove("employee.dat");            
                    rename("temp.dat", "employee.dat");
                    printf("Record Deleted");
                } else {
                    remove("temp.dat"); 
                    printf("Student with Employee ID %d not found!", targetID);
                }
                break;

            case 6:
                printf("Exiting System");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 6");
        }
    } 

    return 0;
}
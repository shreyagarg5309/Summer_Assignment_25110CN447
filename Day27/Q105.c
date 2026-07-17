//Student management system
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Students{
    int rollNum;
    char name[50];
    char branch[20];
    float cgpa;
};

int main(){

    int choice = 0, targetRoll, found;
    FILE *fp, *tempFp;
    struct Students s;

    while((getchar()) != '\n'){
        printf("Enter your choice:\n");
        printf("1. Add\n2. Display\n3. Search\n4. Update\n5. Delete\n6. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                fp = fopen("students.dat", "ab");
                if(fp == NULL){
                    printf("Error!");
                    break;
                }
                printf("Enter roll no: ");
                scanf("%d", &s.rollNum);
                printf("Enter Name: ");
                gets(s.name);
                printf("Enter branch: ");
                gets(s.branch);
                printf("Enter cgpa: ");
                scanf("%f", &s.cgpa);
                fwrite(&s, sizeof(struct Students), 1, fp);
                fclose(fp);
                break;
            case 2:
                fp = fopen("students.dat", "rb");
                if(fp == NULL){
                    printf("No record found");
                    break;
                }
                printf("\nRoll No", "Name", "Branch", "Marks\n");
                while (fread(&s, sizeof(struct Students), 1, fp) == 1) {
                    printf("%d %s %s %f\n", s.rollNum, s.name, s.branch, s.cgpa);
                }
                fclose(fp);
                break;
            case 3:
                fp = fopen("students.dat", "rb");
                if(fp == NULL){
                    printf("No record found");
                    break;
                }
                printf("Enter the roll no to be searched: ");
                scanf("%d", &targetRoll);
                found = 0;
                while(fread(&s, sizeof(struct Students), 1, fp) == 1){
                    if(s.rollNum == targetRoll){
                        printf("Record Found\n");
                        printf("Roll No : %d\n", s.rollNum);
                        printf("Name    : %s\n", s.name);
                        printf("Course  : %s\n", s.branch);
                        printf("Marks   : %.2f\n", s.cgpa);
                        found = 1;
                        break;
                    }
                }
                if(found == 0){
                    printf("No such student found");
                }
                fclose(fp);
                break;
            case 4:
                fp = fopen("students.dat", "rb+");
                if(fp == NULL){
                    printf("No record found");
                    break;
                }
                printf("Enter the roll no to update: ");
                scanf("%d", &targetRoll);
                found = 0;
                while (fread(&s, sizeof(struct Students), 1, fp) == 1) {
                    if (s.rollNum == targetRoll) {
                        printf("\nRecord found! Enter new details.\n");
                        
                        printf("Enter New Name: ");
                        gets(s.name);
                        
                        printf("Enter New Branch: ");
                        gets(s.branch); 
                        
                        printf("Enter New CGPA: ");
                        scanf("%f", &s.cgpa);
                        
                        fseek(fp, -(long)sizeof(struct Students), SEEK_CUR);
                        fwrite(&s, sizeof(struct Students), 1, fp);
                        
                        printf("Record Updated Successfully!");
                        found = 1;
                        break;
                    }
                }
                
                if (found == 0) {
                    printf("Student with Roll Number %d not found!", targetRoll);
                }
                fclose(fp);
                break;

            case 5:
                fp = fopen("students.dat", "rb");
                if (fp == NULL) {
                    printf("No records found");
                    break;
                }
                
                printf("\nEnter Roll Number to delete: ");
                scanf("%d", &targetRoll);
                
                tempFp = fopen("temp.dat", "wb"); 
                found = 0;
                
                while (fread(&s, sizeof(struct Students), 1, fp) == 1) {
                    if (s.rollNum != targetRoll) {
                        fwrite(&s, sizeof(struct Students), 1, tempFp);
                    } else {
                        found = 1;
                    }
                }
                
                fclose(fp);
                fclose(tempFp);
                
                if (found == 1) {
                    remove("students.dat");            
                    rename("temp.dat", "students.dat");
                    printf("Record Deleted");
                } else {
                    remove("temp.dat"); 
                    printf("Student with Roll Number %d not found!", targetRoll);
                }
                break;

            case 6:
                printf("Exiting System");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 6");
        }
    } 

    return 0;
}

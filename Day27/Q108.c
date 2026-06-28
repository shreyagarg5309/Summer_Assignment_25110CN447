//marksheet generation system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Marksheet {
    int roll;
    char name[50];
    int marks[5]; 
    int total;
    float percentage;
    char grade;
};

int main() {
    FILE *fp;
    struct Marksheet m;
    int choice = 0;
    int targetRoll, found, i;

    while (choice != 4) {
        printf("MARKSHEET GENERATION SYSTEM\n");
        printf("1. Generate New Marksheet (Add Record)\n");
        printf("2. View All Student Summaries\n");
        printf("3. Search & Print Full Marksheet\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");       
        scanf("%d", &choice);

        switch (choice) {
            
            case 1:
                fp = fopen("marksheets.dat", "ab"); 
                if (fp == NULL) {
                    printf("Error: Cannot open file!\n");
                    break;
                }

                printf("\nEnter Roll Number: ");
                scanf("%d", &m.roll);
                
                printf("Enter Student Name: ");
                gets(m.name); 
                
                m.total = 0;
                printf("\n--- Enter Marks (out of 100) ---\n");
                for (i = 0; i < 5; i++) {
                    printf("Subject %d: ", i + 1);
                    scanf("%d", &m.marks[i]);
                    m.total += m.marks[i];
                }
                
                m.percentage = (m.total / 500.0) * 100;
                
                if (m.percentage >= 90) m.grade = 'A';
                else if (m.percentage >= 80) m.grade = 'B';
                else if (m.percentage >= 70) m.grade = 'C';
                else if (m.percentage >= 60) m.grade = 'D';
                else m.grade = 'F';
                
                fwrite(&m, sizeof(struct Marksheet), 1, fp);
                fclose(fp);
                
                printf("Marksheet Generated and Saved Successfully");
                break;

            case 2:
                fp = fopen("marksheets.dat", "rb");
                if (fp == NULL) {
                    printf("No records found! Please generate a marksheet first");
                    break;
                }

                printf("\n%-10s %-20s %-10s %-10s %-10s\n", "Roll No", "Name", "Total", "Percent", "Grade");
                
                while (fread(&m, sizeof(struct Marksheet), 1, fp) == 1) {
                    printf("%-10d %-20s %-10d %-10.2f %-10c\n", 
                           m.roll, m.name, m.total, m.percentage, m.grade);
                }
                
                fclose(fp);
                break;

            case 3:
                fp = fopen("marksheets.dat", "rb"); 
                if (fp == NULL) {
                    printf("No records to search!\n");
                    break;
                }

                printf("\nEnter Roll Number to print marksheet: ");
                scanf("%d", &targetRoll);
                
                found = 0;
                while (fread(&m, sizeof(struct Marksheet), 1, fp) == 1) {
                    if (m.roll == targetRoll) {
                        printf("             STUDENT MARKSHEET            \n");
                        printf("Roll No : %d\n", m.roll);
                        printf("Name    : %s\n", m.name);
                        printf("----------------------------------------\n");
                        printf("SUBJECTS                  MARKS OBTAINED\n");
                        printf("----------------------------------------\n");
                        for (i = 0; i < 5; i++) {
                            printf("Subject %d                 %d / 100\n", i + 1, m.marks[i]);
                        }
                        printf("----------------------------------------\n");
                        printf("TOTAL MARKS : %d / 500\n", m.total);
                        printf("PERCENTAGE  : %.2f%%\n", m.percentage);
                        printf("FINAL GRADE : %c\n", m.grade);
                        
                        found = 1;
                        break; 
                    }
                }
                
                if (!found) {
                    printf("\nMarksheet for Roll Number %d not found!\n", targetRoll);
                }
                
                fclose(fp);
                break;

            case 4:
                printf("\nExiting Marksheet System. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please enter a number between 1 and 4\n");
        }
    } 

    return 0;
}

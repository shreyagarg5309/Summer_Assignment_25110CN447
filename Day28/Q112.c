//contact management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
    char address[100];
};

int main() {
    FILE *fp, *tempFp;
    struct Contact c;
    int choice = 0;
    int found;
    char targetName[50];

    while (choice != 0) {
        printf("CONTACT MANAGEMENT SYSTEM\n");
        printf("1. Add a New Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search for a Contact\n");
        printf("4. Delete a Contact\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");       
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                fp = fopen("contacts.dat", "ab"); 
                if (fp == NULL) {
                    printf("Error: Cannot open file!\n");
                    break;
                }
                
                printf("\nEnter Name: ");
                gets(c.name); 
                
                printf("Enter Phone Number: ");
                gets(c.phone); 
                
                printf("Enter Email Address: ");
                gets(c.email);
                
                printf("Enter Physical Address: ");
                gets(c.address);
                
                fwrite(&c, sizeof(struct Contact), 1, fp);
                fclose(fp);
                
                printf("\nContact Added Successfully!\n");
                break;

            case 2:
                fp = fopen("contacts.dat", "rb"); 
                if (fp == NULL) {
                    printf("\nNo contacts found! \n");
                    break;
                }

                printf("\n%-20s %-15s %-25s %-30s\n", "Name", "Phone", "Email", "Address");
                
                while (fread(&c, sizeof(struct Contact), 1, fp) == 1) {
                    printf("%-20s %-15s %-25s %-30s\n", c.name, c.phone, c.email, c.address);
                }
                
                fclose(fp);
                break;

            case 3:
                fp = fopen("contacts.dat", "rb"); 
                if (fp == NULL) {
                    printf("\nNo contacts to search!\n");
                    break;
                }

                printf("\nEnter Contact Name to search: ");
                gets(targetName);
                
                found = 0;
                while (fread(&c, sizeof(struct Contact), 1, fp) == 1) {
                    if (strcmp(c.name, targetName) == 0) {
                        printf("\n--- Contact Found ---\n");
                        printf("Name    : %s\n", c.name);
                        printf("Phone   : %s\n", c.phone);
                        printf("Email   : %s\n", c.email);
                        printf("Address : %s\n", c.address);
                        
                        found = 1;
                        break; 
                    }
                }
                
                if (found == 0) {
                    printf("\nContact named '%s' not found!\n", targetName);
                }
                
                fclose(fp);
                break;

            case 4:
                fp = fopen("contacts.dat", "rb");
                if (fp == NULL) {
                    printf("\nNo contacts to delete!\n");
                    break;
                }
                
                printf("\nEnter Contact Name to delete: ");
                gets(targetName);
                
                tempFp = fopen("temp.dat", "wb"); 
                found = 0;

                while (fread(&c, sizeof(struct Contact), 1, fp) == 1) {
                    if (strcmp(c.name, targetName) != 0) {
                        fwrite(&c, sizeof(struct Contact), 1, tempFp);
                    } else {
                        found = 1; 
                    }
                }
                
                fclose(fp);
                fclose(tempFp);
                
                if (found) {
                    remove("contacts.dat");            
                    rename("temp.dat", "contacts.dat");
                    printf("\nContact Deleted Successfully!\n");
                } else {
                    remove("temp.dat");
                    printf("\nContact named '%s' not found!\n", targetName);
                }
                break;

            case 0:
                printf("\nExiting System. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5\n");
        }
    } 

    return 0;
}

//library management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int bookId;
    char title[100];
    char author[50];
    float price;
    int isIssued; 
};

int main() {
    FILE *fp, *tempFp;
    struct Book b;
    int choice = 0;
    int targetId, found;

    while (choice != 6) {
        printf("LIBRARY MANAGEMENT SYSTEM\n");
        printf("1. Add a New Book\n");
        printf("2. View All Books\n");
        printf("3. Search for a Book\n");
        printf("4. Issue / Return a Book\n");
        printf("5. Delete a Book Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                fp = fopen("library.dat", "ab"); 
                if (fp == NULL) {
                    printf("Error: Cannot open file!\n");
                    break;
                }

                printf("\nEnter Book ID: ");
                scanf("%d", &b.bookId);
                
                printf("Enter Book Title: ");
                gets(b.title);
                
                printf("Enter Author Name: ");
                gets(b.author); 
                
                printf("Enter Book Price: ");
                scanf("%f", &b.price);
                
                b.isIssued = 0; 
                
                fwrite(&b, sizeof(struct Book), 1, fp);
                fclose(fp);
                
                printf("\nBook Added Successfully!\n");
                break;

            case 2:
                fp = fopen("library.dat", "rb"); 
                if (fp == NULL) {
                    printf("\nNo books found! Please add a book first\n");
                    break;
                }

                printf("\n%s %s %s %s %s\n", "ID", "Title", "Author", "Price", "Status");                
                while (fread(&b, sizeof(struct Book), 1, fp) == 1) {
                    printf("%d %s %s %f %s\n", 
                           b.bookId, b.title, b.author, b.price, 
                           (b.isIssued == 0) ? "Available" : "Issued");
                }
                
                fclose(fp);
                break;

            case 3:
                fp = fopen("library.dat", "rb");
                if (fp == NULL) {
                    printf("\nNo books to search!\n");
                    break;
                }

                printf("\nEnter Book ID to search: ");
                scanf("%d", &targetId);
                
                found = 0;
                while (fread(&b, sizeof(struct Book), 1, fp) == 1) {
                    if (b.bookId == targetId) {
                        printf("\nBook Found\n");
                        printf("ID      : %d\n", b.bookId);
                        printf("Title   : %s\n", b.title);
                        printf("Author  : %s\n", b.author);
                        printf("Price   : %f\n", b.price);
                        printf("Status  : %s\n", (b.isIssued == 0) ? "Available" : "Issued"));
                        found = 1;
                        break;
                    }
                }
                
                if (found == 0) {
                    printf("\nBook with ID %d not found!\n", targetId);
                }
                fclose(fp);
                break;

            case 4:
                fp = fopen("library.dat", "rb+"); 
                if (fp == NULL) {
                    printf("\nNo books available to update!\n");
                    break;
                }

                printf("\nEnter Book ID to Issue/Return: ");
                scanf("%d", &targetId);
                
                found = 0;
                while (fread(&b, sizeof(struct Book), 1, fp) == 1) {
                    if (b.bookId == targetId) {
                        found = 1;
                        if (b.isIssued == 0) {
                            b.isIssued = 1;
                            printf("\nBook '%s' has been successfully ISSUED\n", b.title);
                        } else {
                            b.isIssued = 0;
                            printf("\nBook '%s' has been successfully RETURNED\n", b.title);
                        }
                        
                        fseek(fp, -(long)sizeof(struct Book), SEEK_CUR);
                        fwrite(&b, sizeof(struct Book), 1, fp);
                        break;
                    }
                }
                
                if (found == 0) {
                    printf("\nBook with ID %d not found\n", targetId);
                }
                fclose(fp);
                break;

            case 5:
                fp = fopen("library.dat", "rb");
                if (fp == NULL) {
                    printf("\nNo books to delete!\n");
                    break;
                }

                printf("\nEnter Book ID to delete: ");
                scanf("%d", &targetId);
                
                tempFp = fopen("temp.dat", "wb"); 
                found = 0;
                
                while (fread(&b, sizeof(struct Book), 1, fp) == 1) {
                    if (b.bookId != targetId) {
                        fwrite(&b, sizeof(struct Book), 1, tempFp);
                    } else {
                        found = 1;
                    }
                }
                
                fclose(fp);
                fclose(tempFp);
                
                if (found == 1) {
                    remove("library.dat");            
                    rename("temp.dat", "library.dat");
                    printf("\nBook Record Deleted Successfully! \n");
                } else {
                    remove("temp.dat"); 
                    printf("\nBook with ID %d not found!\n", targetId);
                }
                break;

            case 0:
                printf("\nExiting Library System. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please enter a number between 1 and 6\n");
        }
    } 

    return 0;
}

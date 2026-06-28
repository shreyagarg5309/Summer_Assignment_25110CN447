#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[100];
};

int main() {
    struct Book library[100]; 
    int count = 0, choice = 0, found;            
    char searchTitle[100];

    while(choice != 4) {
        printf("\n=== Mini Library System ===\n");
        printf("1. Add a Book\n");
        printf("2. Display All Books\n");
        printf("3. Search a Book by Title\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (count < 100) {
                    printf("\n--- Add a New Book ---\n");
                    printf("Enter Book ID: ");
                    scanf("%d", &library[count].id);
                    getchar(); 
                    printf("Enter Book Title: ");
                    gets(library[count].title); 
                    printf("Enter Book Author: ");
                    gets(library[count].author); 
                    printf("Book added successfully!\n");
                    count++; 
                } 
                else {
                    printf("Library is full! Cannot add more books.\n");
                }
                break;
            case 2:
                printf("\n--- List of Books ---\n");
                if (count == 0) {
                    printf("No books in the library right now.\n");
                } else {
                    for (int i = 0; i < count; i++) {
                        printf("ID: %d | Title: %s | Author: %s\n", 
                               library[i].id, library[i].title, library[i].author);
                    }
                }
                break;
            case 3:
                printf("\n--- Search Book ---\n");
                if (count == 0) {
                    printf("No books to search.\n");
                } 
                else {
                    printf("Enter Title to search: ");
                    gets(searchTitle);                    
                    found = 0;
                    for (int i = 0; i < count; i++) {
                        if (strcmp(library[i].title, searchTitle) == 0) {
                            printf("\nBook Found!\n");
                            printf("ID: %d | Title: %s | Author: %s\n", 
                                   library[i].id, library[i].title, library[i].author);
                            found = 1;
                            break; 
                        }
                    }
                    if (found == 0) {
                        printf("Book with title '%s' not found.\n", searchTitle);
                    }
                }
                break;
            case 4:
                printf("Exiting the system. Goodbye!\n");
                return 0; 
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
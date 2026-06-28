//menu driven string operation system
#include <stdio.h>
#include <string.h>

int main() {
    int choice = 0, len;
    char str1[100], str2[100];
    int compareResult;

    while(choice != 5){
        printf("\n=== STRING OPERATIONS MENU ===\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate (Join) Strings\n");
        printf("4. Compare Two Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");        
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1: 
                printf("Enter a string: ");
                gets(str1);
                len = strlen(str1);
                printf("The length of the string is: %d\n", len);
                break;
            case 2: 
                printf("Enter the string to copy: ");
                gets(str1);
                strcpy(str2, str1); 
                printf("Original string: %s\n", str1);
                printf("Copied string: %s\n", str2);
                break;
            case 3:
                printf("Enter the first string: ");
                gets(str1);
                printf("Enter the second string to add to the first: ");
                gets(str2);
                strcat(str1, str2);
                printf("Concatenated string is: %s\n", str1);
                break;
            case 4: 
                printf("Enter the first string: ");
                gets(str1);
                printf("Enter the second string: ");
                gets(str2);                
                compareResult = strcmp(str1, str2);                
                if (compareResult == 0) {
                    printf("Result: The strings are exactly identical.\n");
                } else if (compareResult < 0) {
                    printf("Result: String 1 comes before String 2 alphabetically.\n");
                } else {
                    printf("Result: String 1 comes after String 2 alphabetically.\n");
                }
                break;
            case 5: 
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select a number between 1 and 5\n");
        }

    }

    return 0;
}

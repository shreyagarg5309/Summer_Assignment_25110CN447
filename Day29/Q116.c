#include <stdio.h>
#include <string.h>

int main() {
    int ids[100], quantities[100], itemCount = 0, choice = 0;
    char names[100][50];
    float prices[100];    

    while (choice != 4) {
        printf("\n=== INVENTORY MANAGEMENT SYSTEM ===\n");
        printf("1. Add New Item\n");
        printf("2. Display All Items\n");
        printf("3. Update Item Quantity\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                if (itemCount >= 100) {
                    printf("\nError: Inventory is full! Cannot add more items.\n");
                } 
                else {
                    printf("\n-- Add Item --\n");
                    printf("Enter Item ID: ");
                    scanf("%d", &ids[itemCount]);                   
                    printf("Enter Item Name (no spaces): ");
                    scanf("%s", names[itemCount]);                    
                    printf("Enter Quantity: ");
                    scanf("%d", &quantities[itemCount]);                    
                    printf("Enter Price: ");
                    scanf("%f", &prices[itemCount]);                    
                    itemCount++; 
                    printf("Item added successfully!\n");
                }
                break;
            case 2:
                if (itemCount == 0) {
                    printf("\nInventory is currently empty.\n");
                } 
                else {
                    printf("%d %s %d %f\n", "ID", "Name", "Quantity", "Price");
                    for (int i = 0; i < itemCount; i++) {
                        printf("%d %s %d %f\n", 
                               ids[i], names[i], quantities[i], prices[i]);
                    }
                }
                break;
            case 3:
                if (itemCount == 0) {
                    printf("\nInventory is empty. Nothing to update.\n");
                } else {
                    int searchId, found = 0;
                    printf("\nEnter the Item ID to update: ");
                    scanf("%d", &searchId);
                    for (int i = 0; i < itemCount; i++) {
                        if (ids[i] == searchId) {
                            printf("Item found: %s (Current Quantity: %d)\n", names[i], quantities[i]);
                            printf("Enter new quantity: ");
                            scanf("%d", &quantities[i]);
                            printf("Quantity updated successfully!\n");
                            found = 1;
                            break; 
                        }
                    }
                    if (found == 0) {
                        printf("Error: Item ID %d not found in inventory.\n", searchId);
                    }
                }
                break;
            case 4:
                printf("\nExiting Inventory System. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please select an option between 1 and 4.\n");
        }
    }

    return 0;
}
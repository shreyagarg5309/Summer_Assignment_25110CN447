#include<stdio.h>

int main(){
    int choice = 0, arr[100], pos, found, num, val;

    while(choice != 6){
        printf("\n=== ARRAY OPERATIONS MENU ===\n");
        printf("1. Create/Initialize Array\n");
        printf("2. Display Elements\n");
        printf("3. Insert Element at Position\n");
        printf("4. Delete Element at Position\n");
        printf("5. Search for an Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nEnter the no of elements to store(max 100): ");
                scanf("%d", &num);
                printf("ENTER THE ELEMENTS OF ARRAY:\n");
                for(int i = 0; i < num; i++){
                    scanf("%d", &arr[i]);
                }
                printf("\nElements entered successfully!\n");
                break;
            case 2:
                if(num == 0){
                    printf("\nArray is empty!\n");
                }
                else{
                    printf("\nThe elements of array are:\n");
                    for(int i = 0; i < num; i++){
                        printf("%d ", arr[i]);
                    }
                }
                break;
            case 3:
                if(num == 100){
                    printf("\nArray is full!\n");
                    break;
                }
                printf("Enter position to insert (1 to %d): ", num + 1);
                scanf("%d", &pos);
                if (pos < 1 || pos > num + 1) {
                    printf("Invalid position!\n");
                } 
                else {
                    printf("Enter the value to insert: ");
                    scanf("%d", &val);
                    for (int i = num - 1; i >= pos - 1; i--) {
                        arr[i + 1] = arr[i];
                    }
                    arr[pos - 1] = val; 
                    num++;                
                    printf("Element inserted successfully.\n");
                }
                break;
            case 4:
                if (num == 0) {
                    printf("\nArray is empty!\n");
                    break;
                }
                printf("Enter position to delete (1 to %d): ", num);
                scanf("%d", &pos);
                if (pos < 1 || pos > num) {
                    printf("Invalid position!\n");
                } 
                else {
                    for (int i = pos - 1; i < num - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    num--;
                    printf("\nElement deleted successfully.\n");
                }
                break;
            case 5:
                if (num == 0) {
                    printf("\nArray is empty.\n");
                    break;
                }
                printf("Enter value to search for: ");
                scanf("%d", &val);
                found = 0;
                
                for (int i = 0; i < num; i++) {
                    if (arr[i] == val) {
                        printf("Element %d found at position %d \n", val, i + 1);
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    printf("\nElement %d not found in the array.\n", val);
                }
                break;
            case 6:
                printf("\nGoodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter a number between 1 to 6\n");
        }
    }

    return 0;
}
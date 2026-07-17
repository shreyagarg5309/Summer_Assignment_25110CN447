//ticket booking system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ticket {
    int ticketId;
    char passengerName[50];
    char destination[50];
    char transportName[50];
    float ticketPrice;
};

int main() {
    FILE *fp, *tempFp;
    struct Ticket t;
    int choice = 0;
    int targetId, found;

    while (choice != 5) {
        printf("TICKET BOOKING SYSTEM\n");
        printf("1. Book a Ticket\n");
        printf("2. View All Booked Tickets\n");
        printf("3. Search a Ticket\n");
        printf("4. Cancel a Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");       
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                fp = fopen("tickets.dat", "ab"); 
                if (fp == NULL) {
                    printf("Error: Cannot open file!\n");
                    break;
                }

                printf("\nEnter Ticket ID: ");
                scanf("%d", &t.ticketId);
                
                printf("Enter Passenger Name: ");
                gets(t.passengerName); 
                
                printf("Enter Destination: ");
                gets(t.destination); 
                
                printf("Enter Train/Bus Name: ");
                gets(t.transportName); 
                
                printf("Enter Ticket Price: ");
                scanf("%f", &t.ticketPrice);

                fwrite(&t, sizeof(struct Ticket), 1, fp);
                fclose(fp);
                
                printf("\nTicket Booked Successfully!\n");
                break;

            case 2:
                fp = fopen("tickets.dat", "rb"); 
                if (fp == NULL) {
                    printf("\nNo tickets booked yet!\n");
                    break;
                }

                printf("\n%s %s %s %s %s\n", 
                       "Ticket ID", "Passenger Name", "Destination", "Transport", "Price");
                
                while (fread(&t, sizeof(struct Ticket), 1, fp) == 1) {
                    printf("%d %s %s %s %f\n", 
                           t.ticketId, t.passengerName, t.destination, t.transportName, t.ticketPrice);
                }
                
                fclose(fp);
                break;

            case 3:
                fp = fopen("tickets.dat", "rb"); 
                if (fp == NULL) {
                    printf("\nNo tickets to search!\n");
                    break;
                }

                printf("\nEnter Ticket ID to search: ");
                scanf("%d", &targetId);
                
                found = 0;
                while (fread(&t, sizeof(struct Ticket), 1, fp) == 1) {
                    if (t.ticketId == targetId) {
                        printf("\n--- E-Ticket Details ---\n");
                        printf("Ticket ID  : %d\n", t.ticketId);
                        printf("Passenger  : %s\n", t.passengerName);
                        printf("Destination: %s\n", t.destination);
                        printf("Transport  : %s\n", t.transportName);
                        printf("Price      : %f\n", t.ticketPrice);
                        found = 1;
                        break; 
                    }
                }
                
                if (found == 0) {
                    printf("\nTicket ID %d not found!\n", targetId);
                }
                
                fclose(fp);
                break;

            case 4:
                fp = fopen("tickets.dat", "rb");
                if (fp == NULL) {
                    printf("\nNo tickets to cancel!\n");
                    break;
                }
                
                printf("\nEnter Ticket ID to cancel: ");
                scanf("%d", &targetId);
                
                tempFp = fopen("temp.dat", "wb"); 
                found = 0;
                
                while (fread(&t, sizeof(struct Ticket), 1, fp) == 1) {
                    if (t.ticketId != targetId) {
                        fwrite(&t, sizeof(struct Ticket), 1, tempFp);
                    } else {
                        found = 1; 
                    }
                }
                
                fclose(fp);
                fclose(tempFp);
                
                if (found) {
                    remove("tickets.dat");            
                    rename("temp.dat", "tickets.dat");
                    printf("\nTicket Canceled Successfully!\n");
                } else {
                    remove("temp.dat"); 
                    printf("\nTicket ID %d not found!\n", targetId);
                }
                break;

            case 0:
                printf("\nClosing Booking System. Have a safe journey!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5\n");
        }
    } 

    return 0;
}

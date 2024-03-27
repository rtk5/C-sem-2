#include <stdio.h>
void initializeRooms();
void displayRooms();
void reserveRoom();
void checkoutRoom();

int main() {
    initializeRooms();

    int choice;
    do {
        printf("\nHotel Management System Menu\n");
        printf("1. Display Rooms\n");
        printf("2. Reserve Room\n");
        printf("3. Checkout\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayRooms();
                break;
            case 2:
                reserveRoom();
                break;
            case 3:
                checkoutRoom();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 4);
        return 0;

        return 0;
}
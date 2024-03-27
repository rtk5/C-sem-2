#include <stdio.h>
#include <string.h>

// Define the maximum number of rooms
#define MAX_ROOMS 10

// Define the structure for a room
struct Room {
    int room_number;
    char guest_name[50];
    int is_occupied;
};

// Global array of rooms
struct Room rooms[MAX_ROOMS];

// Function prototypes
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
}

// Function to initialize all rooms with default values
void initializeRooms() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        rooms[i].room_number = i + 1;
        strcpy(rooms[i].guest_name, "Not Reserved");
        rooms[i].is_occupied = 0;
    }
}

// Function to display the current status of all hotel rooms
void displayRooms() {
    printf("\nRoom Number\tGuest Name\tOccupancy Status\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        printf("%d\t\t%s\t\t%s\n", rooms[i].room_number, rooms[i].guest_name,
               rooms[i].is_occupied ? "Occupied" : "Vacant");
    }
}

// Function to reserve a room
void reserveRoom() {
    int room_number;
    char guest_name[50];

    printf("Enter the room number to reserve: ");
    scanf("%d", &room_number);

    if (room_number < 1 || room_number > MAX_ROOMS) {
        printf("Invalid room number!\n");
        return;
    }

    if (rooms[room_number - 1].is_occupied) {
        printf("Room %d is already occupied.\n", room_number);
    } else {
        printf("Enter guest name: ");
        scanf("%s", guest_name);
        strcpy(rooms[room_number - 1].guest_name, guest_name);
        rooms[room_number - 1].is_occupied = 1;
        printf("Room %d reserved for %s.\n", room_number, guest_name);
    }
}

// Function to checkout from a room
void checkoutRoom() {
    int room_number;

    printf("Enter the room number to checkout: ");
    scanf("%d", &room_number);

    if (room_number < 1 || room_number > MAX_ROOMS) {
        printf("Invalid room number!\n");
        return;
    }

    if (!rooms[room_number - 1].is_occupied) {
        printf("Room %d is not occupied.\n", room_number);
    } else {
        printf("Checking out room %d for guest %s.\n", room_number, rooms[room_number - 1].guest_name);
        strcpy(rooms[room_number - 1].guest_name, "Not Reserved");
        rooms[room_number - 1].is_occupied = 0;
    }
}

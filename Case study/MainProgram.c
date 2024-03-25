#include <stdio.h>

// Define a structure Room
struct Room {
    int roomNumber;
    char guestName[50];
    int occupancyStatus; // 0 for vacant, 1 for occupied
};

// Function to initialize all rooms with default values
void initializeRooms(struct Room rooms[], int numRooms) {
    for (int i = 0; i < numRooms; i++) {
        rooms[i].roomNumber = i + 1;
        rooms[i].guestName[0] = '\0'; // Empty string for guest name
        rooms[i].occupancyStatus = 0; // Set occupancy status to vacant
    }
}

// Function to display the current status of all hotel rooms
void displayRooms(struct Room rooms[], int numRooms) {
    printf("Room Number\tGuest Name\tOccupancy Status\n");
    for (int i = 0; i < numRooms; i++) {
        printf("%d\t\t%s\t\t%s\n", rooms[i].roomNumber, rooms[i].guestName,
               rooms[i].occupancyStatus ? "Occupied" : "Vacant");
    }
}

// Function to reserve a room
void reserveRoom(struct Room rooms[], int numRooms, int roomNumber, const char *guestName) {
    // Check if the room is already occupied
    if (rooms[roomNumber - 1].occupancyStatus) {
        printf("Room %d is already occupied.\n", roomNumber);
    } else {    
        // Update room details upon successful reservation
        rooms[roomNumber - 1].occupancyStatus = 1;
        strcpy(rooms[roomNumber - 1].guestName, guestName);
        printf("Room %d reserved for guest %s.\n", roomNumber, guestName);
    }
}

// Function to check out a room
void checkoutRoom(struct Room rooms[], int numRooms, int roomNumber) {
    // Check if the room is already vacant
    if (!rooms[roomNumber - 1].occupancyStatus) {
        printf("Room %d is already vacant.\n", roomNumber);
    } else {
        // Update room details upon successful checkout
        rooms[roomNumber - 1].occupancyStatus = 0;
        rooms[roomNumber - 1].guestName[0] = '\0'; // Clear guest name
        printf("Guest checked out from Room %d.\n", roomNumber);
    }
}

int main() {
    // Define array of Room structures to represent hotel rooms
    struct Room hotelRooms[10]; // Assuming 10 rooms in the hotel

    // Initialize hotel rooms with default values
    initializeRooms(hotelRooms, 10);

    // Display the current status of all hotel rooms
    displayRooms(hotelRooms, 10);

    // Reserve room example
    reserveRoom(hotelRooms, 10, 2, "John Doe");

    // Check out room example
    checkoutRoom(hotelRooms, 10, 2);

    return 0;
}

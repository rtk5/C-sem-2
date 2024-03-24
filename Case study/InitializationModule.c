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

int main() {
    // Define array of Room structures to represent hotel rooms
    struct Room hotelRooms[10]; // Assuming 10 rooms in the hotel

    // Initialize hotel rooms with default values
    initializeRooms(hotelRooms, 10);

    // Display message indicating initialization is complete
    printf("Hotel rooms initialized successfully.\n");

    return 0;
}

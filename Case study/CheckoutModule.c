#include <stdio.h>

// Define a structure Room
struct Room {
    int roomNumber;
    char guestName[50];
    int occupancyStatus; // 0 for vacant, 1 for occupied
};

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

    // Assuming rooms are initialized with default values as in the previous example

    // Check out room example
    checkoutRoom(hotelRooms, 10, 2);

    return 0;
}

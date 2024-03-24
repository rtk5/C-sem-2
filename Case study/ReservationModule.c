#include <stdio.h>
#include <string.h>

// Define a structure Room
struct Room {
    int roomNumber;
    char guestName[50];
    int occupancyStatus; // 0 for vacant, 1 for occupied
};

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

int main() {
    // Define array of Room structures to represent hotel rooms
    struct Room hotelRooms[10]; // Assuming 10 rooms in the hotel

    // Assuming rooms are initialized with default values as in the previous example

    // Reserve room example
    reserveRoom(hotelRooms, 10, 2, "John Doe");

    return 0;
}

#include <stdio.h>

// Define a structure Room
struct Room {
    int roomNumber;
    char guestName[50];
    int occupancyStatus; // 0 for vacant, 1 for occupied
};

// Function to display the current status of all hotel rooms
void displayRooms(struct Room rooms[], int numRooms) {
    printf("Room Number\tGuest Name\tOccupancy Status\n");
    for (int i = 0; i < numRooms; i++) {
        printf("%d\t\t%s\t\t%s\n", rooms[i].roomNumber, rooms[i].guestName,
               rooms[i].occupancyStatus ? "Occupied" : "Vacant");
    }
}

int main() {
    // Define array of Room structures to represent hotel rooms
    struct Room hotelRooms[10]; // Assuming 10 rooms in the hotel

    // Assuming rooms are initialized with default values as in the previous example

    // Display the current status of all hotel rooms
    displayRooms(hotelRooms, 10);

    return 0;
}

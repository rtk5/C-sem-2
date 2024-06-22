#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 10


struct Room {
    int room_number;
    char guest_name[50];
    int is_occupied;
    float price;
    int num_nights_stayed;
    int additional_services[8]; 
};

struct Room rooms[MAX_ROOMS];

void initializeRooms();
void displayRooms();
void reserveRoom();
void checkoutRoom();
void displayAdditionalServices();
float calculateTotalPrice(int room_number);

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

void initializeRooms() {
    float initial_price = 2000.0;
    for (int i = 0; i < MAX_ROOMS; i++) {
        rooms[i].room_number = i + 1;
        strcpy(rooms[i].guest_name, "Not Reserved");
        rooms[i].is_occupied = 0;
        rooms[i].price = initial_price + (i * 500.0); 
        rooms[i].num_nights_stayed = 0;
        for (int j = 0; j < 8; j++) {
            rooms[i].additional_services[j] = 0; 
        }
    }
}

void displayRooms() {
    printf("\nRoom Number\tGuest Name\tOccupancy Status\tPrice per Night\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        printf("%d\t\t%s\t\t%s\t\t$%.2f\n", rooms[i].room_number, rooms[i].guest_name,
               rooms[i].is_occupied ? "Occupied" : "Vacant", rooms[i].price);
    }
}

void reserveRoom() {
    int room_number;
    char guest_name[50];
    char coupon_response;
    int num_nights;
    float total_price;
    int service_choice;

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

        printf("Do you have a coupon? (y/n): ");
        scanf(" %c", &coupon_response);

        if (coupon_response == 'y' || coupon_response == 'Y') {
            rooms[room_number - 1].price -= 300.0;
        }

        printf("Enter number of nights: ");
        scanf("%d", &num_nights);
        total_price = rooms[room_number - 1].price * num_nights;

        printf("\nAdditional Services Menu\n");
        displayAdditionalServices();
        printf("\nEnter the number corresponding to the service you would like to avail (1-8), or 0 for None: ");
        scanf("%d", &service_choice);

        if (service_choice == 0) {
            printf("No additional services selected.\n");
        } else if (service_choice < 1 || service_choice > 8) {
            printf("Invalid service choice!\n");
            return;
        } else {
            rooms[room_number - 1].additional_services[service_choice - 1] = 1; // Mark the selected service
        }

        total_price += calculateTotalPrice(room_number);

        strcpy(rooms[room_number - 1].guest_name, guest_name);
        rooms[room_number - 1].is_occupied = 1;
        rooms[room_number - 1].num_nights_stayed = num_nights;

        printf("Room %d reserved for %s at $%.2f per night for %d nights. Total price: $%.2f\n", room_number, guest_name, rooms[room_number - 1].price, num_nights, total_price);
    }
}

void displayAdditionalServices() {
    printf("1. Laundry - $200\n");
    printf("2. Heated Pool Access - $500\n");
    printf("3. Room Service - $1000\n");
    printf("4. Ironing - $150\n");
    printf("5. Shoe Polish - $100\n");
    printf("6. Minibar - $700\n");
    printf("7. Arcade - $1000\n");
    printf("8. Bowling - $2000\n");
}

float calculateTotalPrice(int room_number) {
    float total_price = 0.0;
    for (int i = 0; i < 8; i++) {
        if (rooms[room_number - 1].additional_services[i]) {
            switch (i) {
                case 0:
                    total_price += 200.0; // Laundry
                    break;
                case 1:
                    total_price += 500.0; // Heated Pool Access
                    break;
                case 2:
                    total_price += 1000.0; // Room Service
                    break;
                case 3:
                    total_price += 150.0; // Ironing
                    break;
                case 4:
                    total_price += 100.0; // Shoe Polish
                    break;
                case 5:
                    total_price += 700.0; // Minibar
                    break;
                case 6:
                    total_price += 1000.0; // Arcade
                    break;
                case 7:
                    total_price += 2000.0; // Bowling
                    break;
            }
        }
    }
    return total_price;
}

void checkoutRoom() {
    int room_number;
    char paid_response;
    float total_price;

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

        total_price = rooms[room_number - 1].price * rooms[room_number - 1].num_nights_stayed;
        total_price += calculateTotalPrice(room_number);
        printf("Total price including %d nights and additional services: $%.2f\n", rooms[room_number - 1].num_nights_stayed, total_price);

        printf("Have you paid? (y/n): ");
        scanf(" %c", &paid_response);

        if (paid_response == 'y' || paid_response == 'Y') {
            printf("Thank you for choosing our Hotel! Please visit again.\n");
            strcpy(rooms[room_number - 1].guest_name, "Not Reserved");
            rooms[room_number - 1].is_occupied = 0;
            rooms[room_number - 1].num_nights_stayed = 0;
            for (int i = 0; i < 8; i++) {
                rooms[room_number - 1].additional_services[i] = 0; 
            }
        } else {
            printf("Please pay for your stay.\n");
        }
    }
}

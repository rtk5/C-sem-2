#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_NAME_LENGTH 100
#define DATE_LENGTH 9

struct Booking {
    char name[MAX_NAME_LENGTH];
    int age;
    int room_no;
    char room_type[20];
    double price;
    char date_of_booking[DATE_LENGTH];
};

int compare(const char *date1, const char *date2) {
    int d1, m1, y1;
    int d2, m2, y2;

    sscanf(date1, "%2d-%2d-%2d", &d1, &m1, &y1);
    sscanf(date2, "%2d-%2d-%2d", &d2, &m2, &y2);

    if (y1 != y2) return y1 - y2;
    if (m1 != m2) return m1 - m2;
    return d1 - d2;
}

void sorting(struct Booking *bookings, int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (compare(bookings[j].date_of_booking, bookings[j + 1].date_of_booking) > 0) {
                struct Booking temp = bookings[j];
                bookings[j] = bookings[j + 1];
                bookings[j + 1] = temp;
            }
        }
    }
}

void display(const struct Booking *bookings, int count) {
    printf("Name\tAge\tRoom No\tRoom Type\tPrice\tDate of Booking\n");
    for (int i = 0; i < count; ++i) {
        printf("%s\t%d\t%d\t%s\t%.2f\t%s\n", bookings[i].name, bookings[i].age, bookings[i].room_no, bookings[i].room_type, bookings[i].price, bookings[i].date_of_booking);
    }
}

int main() {
    char *filename = "hotel_bookings.csv";
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    struct Booking bookings[100];
    int count = 0;
    char line[MAX_LINE_LENGTH];

    fgets(line, sizeof(line), file); 

    while (fgets(line, sizeof(line), file)) {
        char *token;

        token = strtok(line, ",");
        strncpy(bookings[count].name, token, MAX_NAME_LENGTH);

        token = strtok(NULL, ",");
        bookings[count].age = atoi(token);

        token = strtok(NULL, ",");
        bookings[count].room_no = atoi(token);

        token = strtok(NULL, ",");
        strncpy(bookings[count].room_type, token, 20);

        token = strtok(NULL, ",");
        bookings[count].price = atof(token + 1);

        token = strtok(NULL, "\n");
        strncpy(bookings[count].date_of_booking, token, DATE_LENGTH);

        count++;
    }

    fclose(file);

    char start_date[DATE_LENGTH], end_date[DATE_LENGTH];
    printf("Enter start date (DD-MM-YY): ");
    scanf("%8s", start_date);
    printf("Enter end date (DD-MM-YY): ");
    scanf("%8s", end_date);

    struct Booking filtered_bookings[100];
    int filtered_count = 0;

    for (int i = 0; i < count; ++i) {
        if (compare(bookings[i].date_of_booking, start_date) >= 0 && compare(bookings[i].date_of_booking, end_date) <= 0) {
            filtered_bookings[filtered_count++] = bookings[i];
        }
    }

    sorting(filtered_bookings, filtered_count);
    display(filtered_bookings, filtered_count);

    return 0;
}
#include <stdio.h>

struct employee {
    int emp_id;
    char name[50];
    char phone[15];
    int reward_points;
};

// Function to read details of an employee
void read(struct employee *emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &(emp->emp_id));
    printf("Enter Name: ");
    scanf("%s", emp->name);
    printf("Enter Phone: ");
    scanf("%s", emp->phone);
    printf("Enter Reward Points: ");
    scanf("%d", &(emp->reward_points));
}

// Function to display details of an employee
void display(struct employee *emp) {
    printf("Employee ID: %d\n", emp->emp_id);
    printf("Name: %s\n", emp->name);
    printf("Phone: %s\n", emp->phone);
    printf("Reward Points: %d\n", emp->reward_points);
    if (emp->reward_points > 1000) {
        printf("Gift voucher has been mailed\n");
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    // Reading details of n employees
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        read(&emp[i]);
    }

    // Displaying details of n employees
    printf("Employee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        display(&emp[i]);
    }

    return 0;
}

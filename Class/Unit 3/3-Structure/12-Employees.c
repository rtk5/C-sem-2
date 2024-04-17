#include <stdio.h>

struct employee {
    int emp_id;
    char name[50];
    char phone[15];
    int reward_points;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    // Reading details of n employees
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Phone: ");
        scanf("%s", emp[i].phone);
        printf("Reward Points: ");
        scanf("%d", &emp[i].reward_points);
        printf("\n");
    }

    // Checking reward points and displaying message
    printf("Employee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].name);
        printf("Phone: %s\n", emp[i].phone);
        printf("Reward Points: %d\n", emp[i].reward_points);
        if (emp[i].reward_points > 1000) {
            printf("Gift voucher has been mailed\n");
        }
        printf("\n");
    }

    return 0;
}

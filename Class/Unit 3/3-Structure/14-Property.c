/*Create a structure to store information about property like property ID, owner name,age,property tax,anual income
Read the details of n properties. If annual income is less than 5 lakhs, he is eligible to avail discounr of 20% on property tax amount. 
Display the tax amount to be paid after discount using a seperate function*/

#include<stdio.h>
struct property {
    int property_id,age,property_tax,annual_income;
    char name[10];
};
int main() {
    int n;
    printf("Enter the number of properties: ");
    scanf("%d", &n);

    struct property ps[n];

    // Reading details of n employees
    for (int i = 0; i < n; i++) {
        printf("Enter details for Property  %d:\n", i + 1);
        printf("Property ID: ");
        scanf("%d", &ps[i].property_id);
        printf("Name: ");
        scanf("%s", ps[i].name);
        printf("Property tax: ");
        scanf("%d",&ps[i].property_tax);
        printf("Annual income: ");
        scanf("%d", &ps[i].annual_income);
        printf("\n");
    }

    // Checking reward points and displaying message
    printf("Property Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Property %d:\n", i + 1);
        printf("Property ID: %d\n", ps[i].property_id);
        printf("Name: %s\n", ps[i].name);
        printf("Annual income: %d\n", ps[i].annual_income);
        if (ps[i].annual_income < 5) {
            printf("20 percent discount\n");
            int temp=0.8*ps[i].property_tax;
            ps[i].property_tax = temp;
        }
        printf("Property tax: %d\n",ps[i].property_tax);

        printf("\n");
    }

    return 0;
}

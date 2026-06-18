#include <stdio.h>
int main() {
    float totalBill, costPerPerson;
    int people = 4; // Flat group size of 4 friends
    printf("Enter the total restaurant bill: $");
    scanf("%f", &totalBill);
    costPerPerson = totalBill / people;
    printf("Split between %d people, everyone pays: $%f\n", people, costPerPerson);
    return 0;
}

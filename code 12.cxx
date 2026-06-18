#include <stdio.h>
int main() {
    char grade;
    printf("Enter your exam grade (A, B, C, D, F): ");
    scanf(" %c", &grade); // Space before %c handles extra spaces
    printf("Your recorded grade is: %c\n", grade);
    return 0;
}
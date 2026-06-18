#include <stdio.h>
int main() {
    char gender;
    printf("Enter your gender key (M/F/O): ");
    scanf(" %c", &gender);
    printf("Selected gender option: %c\n", gender);
    return 0;
}

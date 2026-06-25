#include <stdio.h>
int main() {
    int x = 10;
    int y = x--; // Current value 10 is assigned to y first, then x becomes 9
    printf("x = %d, y = %d", x, y); // Prints: x = 9, y = 10
    return 0;
}

#include <stdio.h>
int main() {
    int x = 20;
    int y = --x; // x becomes 19 first, then 19 is assigned to y
    printf("x = %d, y = %d", x, y); // Prints: x = 19, y = 19
    return 0;
}

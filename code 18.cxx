#include <stdio.h>
int main() {
    int side, perimeter;
    printf("Enter the length of one side of the square: ");
    scanf("%d", &side);
    perimeter = 4 * side;
    printf("The perimeter of the square is %d.\n", perimeter);
    return 0;
}

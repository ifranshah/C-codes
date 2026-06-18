#include <stdio.h>
int main() {
    int minutes, seconds;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    seconds = minutes * 60;
    printf("%d minutes is %d seconds.\n", minutes, seconds);
    return 0;
}
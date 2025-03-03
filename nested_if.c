#include <stdio.h>

int main() {
    int num;

    printf("Enter your marks out of 100: ");
    scanf("%d", &num);

    // Ensure the input is within the valid range (0 to 100)
    if (num < 0 || num > 100) {
        printf("Invalid input. Please enter marks between 0 and 100.");
    } else if (num >= 90) {
        printf("You have scored A+.");
    } else if (num >= 80) {
        printf("You have scored A.");
    } else if (num >= 70) {
        printf("You have scored B+.");
    } else if (num >= 60) {
        printf("You have scored B.");
    } else if (num >= 50) {
        printf("You have scored C+.");
    } else if (num >= 40) {
        printf("You have scored C.");
    } else {
        printf("You have failed.");
    }

    return 0;
}

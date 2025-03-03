//WAP in C to take two number from the users and add the even or odd number in between the number
#include <stdio.h>

int main() {
    int a, b, c, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Do you want to sum even (1) or odd (2) numbers? ");
    scanf("%d", &c);

    // Ensure we start from the smaller number
    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    for (int i = start + 1; i < end; i++) {
        if ((c == 1 && i % 2 == 0) || (c == 2 && i % 2 != 0)) {
            sum += i;
        }
    }

    if (c == 1) {
        printf("The sum of even numbers between %d and %d is: %d\n", start, end, sum);
    } else {
        printf("The sum of odd numbers between %d and %d is: %d\n", start, end, sum);
    }

    return 0;
}

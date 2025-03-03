#include <stdio.h>

int main() {
    int n1, n2, evensum = 0, oddsum = 0, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2); // Added space in scanf for clarity

    // Ensure n1 is less than or equal to n2
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (i = n1; i <= n2; i++) {
        if (i % 2 == 0)
            evensum = evensum + i; // Alternatively, use evensum += i;
        else
            oddsum = oddsum + i; // Alternatively, use oddsum += i;
    }

    printf("Sum of even numbers is %d\n", evensum);
    printf("Sum of odd numbers is %d\n", oddsum);

    return 0; // Added return statement for completeness
}
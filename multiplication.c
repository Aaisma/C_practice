#include <stdio.h>
int main()
{
int multiply, i, num;
printf("\n Enter a number to be multiplied: ");
scanf("%d", &num); //if scan, then put &

for(i=1; i<=10; i++)
    {
        multiply= num * i;
        printf("%d * %d = %d\n", num, i, multiply); //if print then no &
    }
}

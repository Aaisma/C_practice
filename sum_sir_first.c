#include <stdio.h>
int main()
{
int num, i, sum=0;
printf("\n Enter a number: ");
scanf("%d", &num); //if scan, then put &

for(i=1; i<=num; i++){
sum = sum + i;
}
printf("Sum is %d", sum); //if print, no &
}
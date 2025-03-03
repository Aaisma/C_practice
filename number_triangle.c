#include <stdio.h>
int main()
{
    int i,j;

    for(i=1; i<=5; i++) //Outer loop for rows
    {
        for(j=1; j<=i; j++) //Inner loop for rows
        {
            printf("%d\t",j);
        }
        printf("\n"); //Move to next line after each row
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i,j,rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) //Outer loop for rows
    {
        for(j=1; j<=i; j++) //Inner loop for stars
        {
            printf("* ");
        }
        printf("\n"); //Moves to next line after each row
    }
    return 0;
}
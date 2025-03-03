#include <stdio.h>
int main()
{
    int i,j; //Declaring variable

    for(i=1; i<=2; i++) //Outer loop runs two times
    {
        for(j=1; j<=3; j++) //Inner loop runs three times
        {
            printf("*\t"); //prints the stars with tab space '/t'
        }
        printf("\n"); //Moves to next line after inner loops completes
    } 
    return 0;
}
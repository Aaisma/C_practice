#include <stdio.h>

int main() 
{
    int marks[10] = {65, 45, 48, 63, 70, 75, 55, 80, 31, 78};
    int lowest = marks [0];  

    for (int i = 1; i < 10; i++) 
    {
        if (marks[i] < lowest) 
        {
            lowest=marks[i]; 
        }
    }

    printf("The lowest marks is: %d",lowest );

    return 0;
}
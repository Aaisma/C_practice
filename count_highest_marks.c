#include <stdio.h>

int main() 
{
    int marks[10] = {65, 45, 48, 63, 70, 75, 55, 80, 31, 78};
    int highest = marks [0];  

    for (int i = 0; i < 10; i++) 
    {
        if (marks[i] > highest) 
        {
            highest=marks[i]; 
        }
    }

    printf("The highest marks is: %d", highest);

    return 0;
}
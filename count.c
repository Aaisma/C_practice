#include <stdio.h>

int main() 
{
    int marks[10] = {65, 45, 48, 63, 70, 75, 55, 80, 31, 78};
    int count = 0;  

    for (int i = 0; i < 10; i++) 
    {
        if (marks[i] >= 60) 
        {
            count = count + 1;  // Add 1 to count
        }
    }

    printf("Total students with marks 60 or more: %d", count);

    return 0;
}

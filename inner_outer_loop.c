#include <stdio.h>
int main(){
    int i,j;
    for(i=1; i<=3; i++) //Outer loop runs three times
    {
        printf("\nOuter loop count %d", i);
        for(j=1; j<=2; j++) //inner loop runs two times
        {
            printf("\nInner loop count %d", j);
        }
    }
    return 0;
}
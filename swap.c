#include<stdio.h>

int main(){
    int a, b, temp;
    
    printf("Enter the first number: "); //Asks user for the first number
    scanf("%d", &a);

    printf("Enter the second number: "); //Asks user for the second number
    scanf("%d", &b);

    temp=a; //Sends emporary variable to first number
    a=b; //sends first number to second number
    b=temp; //Sends the temporary variable into second number

    printf("The swapped first number is %d\n", a);
    printf("The swapped second number is %d\n", b);

    return 0;
    
};
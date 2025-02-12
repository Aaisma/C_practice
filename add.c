#include<stdio.h>

int AddNumber(int a, int b); //function declaration

int main(){
    int num1=5, num2=10;
    int Result= AddNumber(num1, num2); //Function call

    printf("The sum is %d\n", Result);
    return 0;
}

int AddNumber(int a, int b){
    return a+b;
}


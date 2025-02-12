#include<stdio.h>
int Addnumber(int a, int b); //function declaration

int main(){
    char ad= 'a'; //Char
    int num1=5;
    int num2=20;
    int result= num1/num2;

    printf("The result is %d\n and the character is %c\n", result, ad);
    return 0;

}

int Addnumber(int a, int b){
    return a/b;
}
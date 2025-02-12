#include<stdio.h>

int main(){
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if(num == 0){
        printf("The number is zero.");
    }
    else {
        printf("The number is non-zero.");
    }
    return 0;

}
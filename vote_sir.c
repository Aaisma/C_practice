#include<stdio.h>

int main(){
    int age;
    char citizen;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen: ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'y' || citizen == 'Y')){
        printf("You are eligible to vote.");
    } else {
        printf("You are not eligible to vote.");
    }
    return 0;

}
#include<stdio.h> //to be checked!

int main(){
    int num;

    printf("Enter your marks");
    scanf("%d", &num);


    if(num>=90 && num < 80){
        print("You have scored A+.");
    } else if(num>=80 && num < 70){
        print("You have scored A.");

    } else if (num>=70 && num < 60){
        print("You have scored B+.");

    } else {
        printf("You have failed");
    }

    return 0;

}
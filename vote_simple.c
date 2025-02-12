#include<stdio.h>

int main(){
    int num, citizen;

    printf("Enter your age:");
    scanf("%d", &num);
    
    printf("Are you a citizen? Press 1 if yes, 0 if no:");
    scanf("%d", &citizen);

    if(num > 18 && citizen == 1){
        printf("You are eligible to vote.");
    }
    else {
        printf("You are not elegible to vote.");
    }
    return 0;

}

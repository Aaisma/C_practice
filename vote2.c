#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char citizen[10]; //storing the citizenship input

     
     printf("Enter your age: "); // Ask the user to enter their age
     scanf("%d", &age);
 
     printf("Are you a citizen? (yes/no): "); //Ask the user whether they are a citizen
     scanf("%s", citizen);
 
     //Applying Condition
     if (age >= 18 && (citizen[0] == 'y' || citizen[0] == 'Y')) {
         printf("You are eligible to vote.\n");
     } else {
         printf("You are not eligible to vote.\n");
     }
     
     return 0;

 }
#include <stdio.h>
#include<string.h>

struct student{
char name[50];
int roll_no;
float marks;
};

int main(){
    struct student s;

// Ask the user to input their name
printf("Enter your name: ");
scanf("%s", s.name);

// Ask the input their roll no.
printf("Enter your roll no.: ");
scanf("%d", &s.roll_no);

// Ask the user for marks
printf("Enter your marks: ");
scanf("%f", &s.marks);

// display user's name, roll no. and marks
printf("\n The user's name is %s\n", s.name);
printf("\n The user's roll no. is %d\n", s.roll_no);
printf("\n The user's mark is %.2f\n", s.marks);
return 0;
}
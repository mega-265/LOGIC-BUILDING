// if_else_2
#include<stdio.h> 
int main() {
int marks;
printf("Enter your marks: \n"); 
scanf("%d", &marks);
if (marks > 40) { 
    if (marks > 75)
printf("You got distinction\n");
}
else
printf("You need to repeat the course\n");
}
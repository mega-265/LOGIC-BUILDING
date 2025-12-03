// circumference of a circle
#include<stdio.h>
int main() {
float radius;
float circum;
printf("Enter radius : \n"); 
scanf("%f", &radius);
circum = 2* (22.0/7) * radius;
printf ("radius = %5.2f, circum = %5.2f\n", radius, circum);
}
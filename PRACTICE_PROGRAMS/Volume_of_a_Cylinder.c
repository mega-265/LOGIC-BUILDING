//  Program to calculate Volume of a Cylinder 
#include <stdio.h>

void main() {

    int breadth,height;
	long volume_of_cylinder;
	
	printf(" Enter the Breadth of Cylinder : ");
	scanf("%d", &breadth);
    
        printf("\nEnter the Height of Cylinder : ");
	scanf("%d", &height);
    
	volume_of_cylinder = breadth*height;

	printf("\n Volume of Cylinder with Breadth as %d and Height as %d = %ld",breadth,height,volume_of_cylinder);
}
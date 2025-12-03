// Program to calculate Area of a Rectangle
#include <stdio.h>

void main() {

    int length;
    int breadth;
	long area;
	
	printf(" Enter the Length of a Rectangle : ");
	scanf("%d", &length);
    
    printf("\n Enter the Breadth of a Rectangle : ");
	scanf("%d", &breadth);

	area = length*breadth;
	printf("\nArea of Rectangle with Length as %d and Breadth as %d  = %ld \n",length,breadth,area);

}
//  WAP to calculate area of a square

#include <stdio.h>
void main() {
    int side;
	int area;
	printf("Enter the side of a square : ");
	scanf("%d", &side);
	area = side*side;

	printf("\nArea of square with side %d = %ld ",side,area);
}
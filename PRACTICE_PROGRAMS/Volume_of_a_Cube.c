// Program to calculate Volume of a Cube
#include <stdio.h>

void main() {

    int side;
	long volume_of_cube;

	printf(" Enter the side of cube : ");
	scanf("%d", &side);
    
	volume_of_cube = side*side*side;

	printf("\n Volume of Cube with Side as %d = %ld ",side, volume_of_cube);
}
//  WAP to Calculate the Area and Circumference of Circle
 
#include <stdio.h>
void main() {
    int radius;
	static float PI = 3.142;
	float area;
	float circumfrence;

	printf("Enter the radius of Circle : ");
	scanf("%d", &radius);
	area = PI*radius*radius;
	circumfrence = 2*PI*radius;
	printf("\n\nArea of circle with radius %d = %f  \n\n",radius,area);
	printf("Circumference of circle with radius %d = %f  \n\n",radius,circumfrence);

}
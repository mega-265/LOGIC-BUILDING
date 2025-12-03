// WAP which accepts radius of a circle and finds out the side of a square having similar area
#include <stdio.h>
#include <math.h>

float pie=3.14;
float area,side,radius;
int main() {
    // Write C code here
    printf("Enter radius of the circle:(cm)\n");
    scanf("%f",&radius);
    area=pie*(radius*radius);
    side=sqrt(area);
      printf("The side of the square is %f cm\n", side);

    return 0;
}
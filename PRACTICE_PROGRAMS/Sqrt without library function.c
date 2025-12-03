// WAP to calculate square of a number without sqrt library function
#include <stdio.h>

void main() {
    float num, d=100,x=0;
    printf("Enter number: ");
    scanf("%f",&num);
    while (d>0.0001)
    {
        while(x*x<num){
            x=x+d;
        }
        if(x*x==num){
            break;
        }else
            x=x-d;
            d=d/10;
    }
        printf("%f",x);
    
    //   printf("Squire root :%lf\n ",mySqrt(num));


}
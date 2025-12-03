//WAP to print the number of digits in an integer number
#include <stdio.h>
int main(){
 int num, sum, temp_var;
 printf("Enter Number: \n");
 scanf("%d", &num);

 printf("Number : %d, ", num);
 sum=0;
 while(num >=1){
 temp_var = num%10; //get unit place digit
 sum = sum + 1;
 num = num/10;
}
 printf(" Has Total Digits : %d", sum);
 

return 0;}

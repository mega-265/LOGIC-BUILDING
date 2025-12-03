//Testing wether a number is positive or negative

#include<stdio.h>
int main(){
    int n;
    printf("Enter number\n");
    scanf("%d",&n);

    if(n>=0){
        printf("The number positive ");
    }else{
        printf("The number is negative");
    }
    return 0;
}
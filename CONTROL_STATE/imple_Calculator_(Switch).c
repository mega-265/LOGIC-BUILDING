/*  Simple Calculator */
#include <stdio.h>

int main() {
    char op;
    double a,b;
    scanf("%lf %c %lf",&a,&op,&b);
    switch(op){
        case '+': printf("%g", a+b); break;
        case '-': printf("%g", a-b); break;
        case '*': printf("%g", a*b); break;
        case '/': if(b!=0) printf("%g", a/b); else printf("Error"); break;
        default: printf("Invalid");
    }
    return 0;
}

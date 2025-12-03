// WAP to accept an amount from the user. Break it into indian currency, in such a way, so that you need to pay minimum number of notes
#include <stdio.h>
int amount, rem;
int count[9]={0,0,0,0,0,0,0,0,0};
int currency[9]={500,200,100,50,20,10,5,2,1};
int i;
int main() {
    
    printf("Enter amount :");
    scanf("%d", &amount);
    
        for(i=0;i<9;i++){
            if(amount>=currency[i]){
                count[i]=amount/currency[i];
                rem=amount-(count[i]*currency[i]);
                  amount=rem;

                    printf("%d notes of Rs%d\n",count[i],currency[i]);
            }
            else{
                continue;}
    
        }
 
    return 0;
}
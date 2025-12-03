// Drawing a pattern 
    //    *
    //   **
    //  ***
    // ****

#include <stdio.h>

int main() {
int rows;
    printf("Enter number of rows \n");
    scanf("%d",& rows);
    
for(int i=0;i<rows || i == rows;i++){
    
    for(int j=i; j < rows ; j++){
        printf(" ");
    }
    
    for(int k=0; k < i || k == i; k++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}
// string (collection of characters)
#include <stdio.h>

int main() {
    int size, i ;
    
    printf("Enter the size\n");
    scanf("%d",&size);
    
    char arr[size];
    printf("Enter the characters\n");
      getchar();
    for(i=0; i<size; i++){
        scanf("%c",&arr[i]);
    }
  
   printf("You entered:\n");
    for (i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    return 0;
}
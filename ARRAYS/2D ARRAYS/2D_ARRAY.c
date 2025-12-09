// 2D ARRAY
#include <stdio.h>

int main() {
int rows,cols;
printf("Enter the number of Rows & Columns:\n");
scanf("%d %d", &rows, &cols);
int arr[rows][cols];
printf("Enter the elements in the 2D array/metrix:\n");
for(int i=0; i<rows;i++){
    for(int j=0; j<cols ; j++){
        printf("Enter the element ARR[%d][%d]:\n",i,j);
        scanf("%d",&arr[i][j]);
    }

    
}
//display
for(int i=0; i<rows;i++){
    for(int j=0; j<cols ; j++){
        printf("%d\n",arr[i][j]);
    }
}

    return 0;
}
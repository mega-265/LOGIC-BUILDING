// using fgets for string
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter Name\n");
    fgets(str, sizeof(str), stdin);   // reads full line including spaces

    printf("The name is %s", str);

    return 0;
}
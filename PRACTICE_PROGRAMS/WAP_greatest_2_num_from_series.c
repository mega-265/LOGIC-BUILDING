// WAP accept 3 numbers from the user and display the greatest two numbers
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int first, second;

    // Find the largest number
    if (a >= b && a >= c) {
        first = a;
        second = (b >= c) ? b : c;
    }
    else if (b >= a && b >= c) {
        first = b;
        second = (a >= c) ? a : c;
    }
    else {
        first = c;
        second = (a >= b) ? a : b;
    }

    printf("The greatest two numbers are: %d and %d\n", first, second);

    return 0;
}
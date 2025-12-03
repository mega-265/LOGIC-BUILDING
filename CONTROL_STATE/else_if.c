// else_if
#include <stdio.h>

int main() {
    char input;
    printf("Input a character: ");
    scanf(" %c", &input);  // added space before %c to skip whitespace

    if (input == 'W') {
        printf("Attendance is below 85 %%\n");
    }
    else if (input == 'A') {
        printf("Marks between 90--100 %%\n");
    }
    else if (input == 'B') {
        printf("Marks between 80--90 %%\n");
    }
    else {
        printf("Invalid Character. Enter one of W, A, B\n");
    }

    return 0;
}

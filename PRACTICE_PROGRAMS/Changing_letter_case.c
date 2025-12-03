//converting uppercase to lowercase
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string in uppercase:\n");
    fgets(str, sizeof(str), stdin);

    // Convert to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {  
            str[i] = str[i] + 32;   
        }
    }

    printf("Lowercase string: %s", str);

    return 0;}
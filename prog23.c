//Write a C program to extract only the uppercase letters from an alphanumeric string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter an alphanumeric string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase letters: ");

    while (str[i] != '\0') {

        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i]);
        }

        i++;
    }

    return 0;
}

//Write a C program to reverse a password string and display the reversed version.
#include <stdio.h>

int main() {
    char password[100];
    int i = 0, length = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    while (password[length] != '\0' && password[length] != '\n') {
        length++;
    }

    printf("Reversed password: ");

    for (i = length - 1; i >= 0; i--) {
        printf("%c", password[i]);
    }

    return 0;
}

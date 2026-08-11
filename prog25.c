//Write a C program to validate whether a password contains at least one uppercase letter, one lowercase letter, one digit, and one special character.
#include <stdio.h>

int main() {

    char password[100];
    int i;
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    for (i = 0; password[i] != '\0'; i++) {

        if (password[i] >= 'A' && password[i] <= 'Z')
            upper = 1;

        else if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;

        else if (password[i] >= '0' && password[i] <= '9')
            digit = 1;

        else
            special = 1;
    }

    if (upper && lower && digit && special)
        printf("Valid Password\n");
    else
        printf("Invalid Password\n");

    return 0;
}

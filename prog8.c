//Write a C program to convert all uppercase letters in a company name into lowercase.
#include <stdio.h>

int main() {

    char str[100];
    int i = 0;

    printf("Enter company name: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("Lowercase: %s", str);

    return 0;
}

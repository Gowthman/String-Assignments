//Write a C program to replace every vowel in a sentence with the '*' character.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {

            str[i] = '*';
        }

        i++;
    }

    printf("Modified sentence: %s", str);

    return 0;
}

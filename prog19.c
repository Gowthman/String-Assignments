//Write a C program to remove duplicate characters from a username while preserving the first occurrence.
#include <stdio.h>

int main() {

    char str[100];
    int i = 0;

    printf("Enter sentence: ");
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

    printf("%s", str);

    return 0;
}

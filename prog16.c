//Write a C program to find the first occurrence of a character in a string and display its position.
#include <stdio.h>

int main() {

    char str[100], ch;
    int i = 0, found = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character: ");
    scanf(" %c", &ch);

    while (str[i] != '\0') {

        if (str[i] == ch) {
            printf("First occurrence at position %d", i);
            found = 1;
            break;
        }

        i++;
    }

    if (!found)
        printf("Character not found");

    return 0;
}

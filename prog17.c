//Write a C program to find the last occurrence of a character in a file name.
#include <stdio.h>

int main() {

    char str[100], ch;
    int i = 0, pos = -1;

    printf("Enter file name: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character: ");
    scanf(" %c", &ch);

    while (str[i] != '\0') {

        if (str[i] == ch)
            pos = i;

        i++;
    }

    if (pos == -1)
        printf("Character not found");
    else
        printf("Last occurrence at position %d", pos);

    return 0;
}

//Write a C program to replace every occurrence of a given character with another character in a sentence.
#include <stdio.h>

int main() {

    char str[100], oldChar, newChar;
    int i = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Character to replace: ");
    scanf(" %c", &oldChar);

    printf("Replace with: ");
    scanf(" %c", &newChar);

    while (str[i] != '\0') {

        if (str[i] == oldChar)
            str[i] = newChar;

        i++;
    }

    printf("%s", str);

    return 0;
}

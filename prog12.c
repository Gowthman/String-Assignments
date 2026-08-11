//Write a C program to compare two usernames without using strcmp() and determine whether they are identical.
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
            found = 1;
            break;
        }

        i++;
    }

    if (found)
        printf("Character Found");
    else
        printf("Character Not Found");

    return 0;
}

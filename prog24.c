//Write a C program to remove all repeated consecutive characters from a string. Example: "boook" → "bok".
#include <stdio.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] != str[i + 1]) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Modified string: %s\n", str);

    return 0;
}

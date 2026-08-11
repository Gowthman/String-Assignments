//Write a C program to count how many times a particular character appears in a paragraph.
#include <stdio.h>

int main() {

    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter paragraph: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {

        if (str[i] == ch)
            count++;

        i++;
    }

    printf("Frequency = %d", count);

    return 0;
}

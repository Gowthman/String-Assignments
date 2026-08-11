//Write a C program to check whether an entered word is a palindrome. Example: "LEVEL".
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0, palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", str);

    while (str[length] != '\0')
        length++;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

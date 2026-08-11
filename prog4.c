//Write a C program to count the number of words in a sentence entered by a user.
#include <stdio.h>

int main() {
    char sentence[100];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {

        // Count a word when a non-space character
        // is followed by a space, newline, or end of string.
        if (sentence[i] != ' ' &&
            (sentence[i + 1] == ' ' ||
             sentence[i + 1] == '\n' ||
             sentence[i + 1] == '\0')) {
            words++;
        }

        i++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}

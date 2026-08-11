//Write a C program to count the number of vowels and consonants in a customer's feedback message.
#include <stdio.h>

int main() {
    char feedback[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter customer's feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    while (feedback[i] != '\0') {
        char ch = feedback[i];

        // Convert uppercase letters to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if it is an alphabet
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}

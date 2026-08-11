//Write a C program to determine whether two strings are anagrams of each other. Example: "listen" and "silent".
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count frequency of first string
    for (i = 0; str1[i] != '\0'; i++) {

        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i] + 32;

        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
    }

    // Count frequency of second string
    for (i = 0; str2[i] != '\0'; i++) {

        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] = str2[i] + 32;

        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
    }

    // Compare both frequency arrays
    for (i = 0; i < 26; i++) {

        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("The strings are Anagrams.");
    else
        printf("The strings are Not Anagrams.");

    return 0;
}

//Write a C program to check whether a given character exists in a string entered by the user.
#include <stdio.h>

int main() {

    char source[100], destination[100];
    int i = 0;

    printf("Enter employee name: ");
    scanf("%s", source);

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    printf("Copied Name: %s", destination);

    return 0;
}

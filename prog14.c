//Write a C program to copy one employee name into another string without using strcpy().
#include <stdio.h>

int main() {

    char first[100], last[100];
    int i = 0, j = 0;

    printf("Enter first name: ");
    scanf("%s", first);

    printf("Enter last name: ");
    scanf("%s", last);

    while (first[i] != '\0')
        i++;

    first[i] = ' ';
    i++;

    while (last[j] != '\0') {
        first[i] = last[j];
        i++;
        j++;
    }

    first[i] = '\0';

    printf("Full Name: %s", first);

    return 0;
}

//Write a C program to remove all spaces from a product serial number entered by the user.
#include <stdio.h>

int main() {

    char str[100];
    int i = 0, j = 0;

    printf("Enter serial number: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}

//Write a C program to convert all lowercase letters in an email subject into uppercase without using strupr().
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter email subject: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }

        i++;
    }

    printf("Uppercase: %s", str);

    return 0;
}

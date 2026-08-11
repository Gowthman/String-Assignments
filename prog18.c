//Write a C program to remove all digits from a mixed string. Example: "AB123CD45".
#include <stdio.h>

int main() {

    char str[100];
    int i = 0, j = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (!(str[i] >= '0' && str[i] <= '9')) {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}

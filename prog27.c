//Write a C program to extract only uppercase letters from a string using a user-defined function.	void extractUppercase(char str[], char result[])	Character filtering
#include <stdio.h>

void extractUpper(char str[]);

int main() {

    char str[100];

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    extractUpper(str);

    return 0;
}

void extractUpper(char str[]) {

    int i;

    printf("Uppercase Letters: ");

    for(i=0;str[i]!='\0';i++){

        if(str[i]>='A'&&str[i]<='Z')
            printf("%c",str[i]);
    }
}

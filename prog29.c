//Write a C program to compress consecutive duplicate characters in a string. Example: "aaabbccccd" becomes "abcd" using a user-defined function.	void compressString(char str[])	Traversal, modification
#include <stdio.h>

void compress(char str[]);

int main() {

    char str[100];

    printf("Enter string: ");
    scanf("%s",str);

    compress(str);

    printf("Compressed String: %s",str);

    return 0;
}

void compress(char str[]) {

    int i,j=0;

    for(i=0;str[i]!='\0';i++){

        if(str[i]!=str[i+1]){

            str[j]=str[i];
            j++;
        }
    }

    str[j]='\0';
}

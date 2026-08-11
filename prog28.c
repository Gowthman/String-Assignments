//Write a C program to validate whether a password contains at least one uppercase letter, one lowercase letter, one digit, and one special character using a user-defined function.	int validatePassword(char password[])	Validation, character classification
#include <stdio.h>

int validate(char pass[]);

int main() {

    char pass[100];

    printf("Enter Password: ");
    scanf("%s",pass);

    if(validate(pass))
        printf("Valid Password");
    else
        printf("Invalid Password");

    return 0;
}

int validate(char pass[]) {

    int i;
    int upper=0,lower=0,digit=0,special=0;

    for(i=0;pass[i]!='\0';i++){

        if(pass[i]>='A'&&pass[i]<='Z')
            upper=1;

        else if(pass[i]>='a'&&pass[i]<='z')
            lower=1;

        else if(pass[i]>='0'&&pass[i]<='9')
            digit=1;

        else
            special=1;
    }

    return upper&&lower&&digit&&special;
}

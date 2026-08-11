//Write a C program to implement your own mini string library by creating user-defined functions for length, copy, compare, concatenate, reverse, uppercase conversion, lowercase conversion, palindrome checking, and character search. Demonstrate each function from main().
#include <stdio.h>

int length(char str[]);
void copy(char s1[],char s2[]);
int compare(char s1[],char s2[]);
void concatenate(char s1[],char s2[]);
void reverse(char str[]);
void upper(char str[]);
void lower(char str[]);
int palindrome(char str[]);
int search(char str[],char ch);

int main(){

    char s1[100]="Hello";
    char s2[100]="World";
    char copystr[100];

    printf("Length = %d\n",length(s1));

    copy(s1,copystr);
    printf("Copy = %s\n",copystr);

    printf("Compare = %d\n",compare(s1,s2));

    concatenate(s1,s2);
    printf("Concatenate = %s\n",s1);

    reverse(s2);

    upper(s2);
    printf("Upper = %s\n",s2);

    lower(s2);
    printf("Lower = %s\n",s2);

    if(palindrome("LEVEL"))
        printf("Palindrome\n");

    if(search(s2,'o'))
        printf("Character Found\n");
    else
        printf("Character Not Found\n");

    return 0;
}

int length(char str[]){
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}

void copy(char s1[],char s2[]){
    int i=0;
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
}

int compare(char s1[],char s2[]){
    int i=0;
    while(s1[i]!='\0'||s2[i]!='\0'){
        if(s1[i]!=s2[i])
            return 0;
        i++;
    }
    return 1;
}

void concatenate(char s1[],char s2[]){
    int i=0,j=0;

    while(s1[i]!='\0')
        i++;

    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }

    s1[i]='\0';
}

void reverse(char str[]){

    int i,len=0;

    while(str[len]!='\0')
        len++;

    printf("Reverse = ");

    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);

    printf("\n");
}

void upper(char str[]){

    int i;

    for(i=0;str[i]!='\0';i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
}

void lower(char str[]){

    int i;

    for(i=0;str[i]!='\0';i++)
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
}

int palindrome(char str[]){

    int i,len=0;

    while(str[len]!='\0')
        len++;

    for(i=0;i<len/2;i++)
        if(str[i]!=str[len-i-1])
            return 0;

    return 1;
}

int search(char str[],char ch){

    int i;

    for(i=0;str[i]!='\0';i++)
        if(str[i]==ch)
            return 1;

    return 0;
}

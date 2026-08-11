//Write a C program to determine whether two strings are anagrams using a user-defined function.	int isAnagram(char s1[], char s2[])	Frequency array
#include <stdio.h>

int anagram(char str1[], char str2[]);

int main() {

    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(anagram(str1,str2))
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}

int anagram(char str1[], char str2[]) {

    int freq1[26]={0},freq2[26]={0};
    int i;

    for(i=0;str1[i]!='\0';i++){

        if(str1[i]>='A'&&str1[i]<='Z')
            str1[i]+=32;

        freq1[str1[i]-'a']++;
    }

    for(i=0;str2[i]!='\0';i++){

        if(str2[i]>='A'&&str2[i]<='Z')
            str2[i]+=32;

        freq2[str2[i]-'a']++;
    }

    for(i=0;i<26;i++){

        if(freq1[i]!=freq2[i])
            return 0;
    }

    return 1;
}

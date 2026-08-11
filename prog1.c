//Write a C program to accept a student's full name and display it exactly as entered.

#include<stdio.h>
#include<string.h>

int main(){
        printf("Enter the name of the Student:);
	char name[20];
	//Two  method
	//scanf("%s",name);
	fgets(name,sizeof(name),stdin);
	printf("Name of the Student:%s\n",name);
  return 0;
 }
	

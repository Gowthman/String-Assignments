//Write a C program to calculate the length of a product name without using strlen().

#include<stdio.h>
#include<string.h>

int main(){
	//Two ways to print length of the string
	//using strlen
	char product[40];
	printf("Enter the prouct name:");
	fgets(product,sizeof(product),stdin);
	printf("Using strlen :%ld\n",strlen(product));
	int length=0;
	while(product[length] !='\0'&& product[length] !='\n'){
	length++;
	}
	printf("Length of the Product String:%d\n",length);
return 0;
}
	

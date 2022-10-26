//Write a Java program to reverse a given string.

#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i;
	printf("\nPlease enter the string to be reversed:");
	scanf("%s",&ch);
	for(i=strlen(ch)-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	return 0;
}


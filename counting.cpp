//Write a c program to count the letters, spaces, numbers, and other characters of an input string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int let=0,sp=0,num,schar=0,i=0;
	printf("\n Enter the string:");
	gets(str);
	for(i=0; str[i]!=NULL; i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		let++;
		else if(str[i]==' ')
		sp++;
		else if((str[i]>='0' && str[i]<='9'))
		num++;
		else
		schar++;
	}
	printf("\n Number of letters in the string: %d",let);
    printf("\n Number of spaces in the string: %d",sp);
    printf("\n Number of numbers in the string: %d",num);
   	printf("\n Number of other characters in the string: %d",schar);
   	return 0;
}

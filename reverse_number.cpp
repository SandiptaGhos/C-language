//write a c program to reverse and print a given number

#include<stdio.h>
int main()
{
	int a,rev=0,n;
	printf("Enter an integer:");
	scanf("%d",&a);
	while(a!=0)
	{
		n=a%10;
		rev=rev*10+n;
		a/=10;
	}
	printf("Reversed number=%d",rev);
	return 0;
}


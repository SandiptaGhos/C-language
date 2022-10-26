//Write a c program to convert a decimal number to a binary number.

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,v,r,bny=0,i=1;
	printf("\n\tEnter a Decimal Number:");
	scanf("%d",&n);
	v=n;
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		bny=bny+(r*i);
		i=i*10;
	}
	printf("\n\tBinary equivalent of %d is %d",v,bny);
	return 0;
}

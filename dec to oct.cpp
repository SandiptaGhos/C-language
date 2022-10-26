//Write a c program to convert a decimal number to octal number

#include<stdio.h>
int main()
{
	int num,temp,rem,i=1,sum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%8;
		sum=sum+i*rem;
		i=i*10;
		temp=temp/8;
	}
	printf("Octal Number:%d",sum);
	return 0;
}

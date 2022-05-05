#include<stdio.h>
int main()
{
	int a[20];
	int b=0,i=0,n=0,num=0,sum=0,num1=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of an array:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number element of the array:",i);
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=a[i]%10;
		num=num*10+b;
	}
	num1=num;
	for(i=0;i<n;i++)
	{
		b=num1%10;
		sum=sum*10+b;
		num1=num1/10;
	}
	if(sum==num)
	{
		printf("\n It is a palindrome number");
	}
	else
	{
		printf("It is not a palindrome number");
	}
	return 0;
}


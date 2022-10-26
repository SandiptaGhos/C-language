//Write a Java program that takes a number as input and prints its multiplication table upto 10

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,(n*i));
	}
	return 0;
}

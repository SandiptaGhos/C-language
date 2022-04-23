//write a c program to find and print the square of each one of the even values from 1 to a specified value

#include<stdio.h>

int main()
{
	int n=0,i=0;
	printf("Enter an integer:");
	scanf("%d",&n);
	printf("list of square of each one of the even values from 1 to %d:\n",n);
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("%d^2=%d\n,i,i*i");
	}
}
return 0;
}



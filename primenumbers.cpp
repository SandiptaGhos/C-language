//write a C function which generates all the prime numbers between a given ranges taken as input

#include<stdio.h>
int main()
{
	int ul,ll;
	printf("Enter lower limit:");
	scanf("%d",&ll);
	printf("Enter upper limit:");
	scanf("%d",&ul);
	printf("Prime numbers:");
	for(int i=ll;i<=ul;i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			c=c+1;
		}
		if(c==2)
		{
			printf("%d",i);
		}
		printf("\n");
		}
		return 0;
	}

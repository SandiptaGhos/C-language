#include<stdio.h>

void main()
{
	int number,N=0;
	int terms=1;
	int start=1;
	printf("Enter any number:");
	scanf("%d",&number);
	printf("Enter no. of terms:");
	scanf("%d",&N);
	printf("Multiplication table of %d upto %d terms is:- \n",number,N);
	while(terms<=N)
	{
		printf("%d * %d =%d\n",number,start,(number*start));
	}
}

	


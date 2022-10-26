//Write a c program to convert a binary number to hexadecimal number.

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i=0,j=0,des=0,num,temp,rem;
	char hexa[100];
	printf("Enter any Binary number:");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		des=des+rem*pow(2,i);
		i++;
		temp=temp/10;
	}
	printf("Hexadecimal Number: %d",des);
	i=0;
	rem=0;
	while(des!=0)
	{
		rem=des%16;
		if(rem<10)
		{
			hexa[i]=rem+48;
		}
		else
		{
		hexa[i]=rem+55;
	    }
	i++;
	des=des/16;
}
for(j=i-1;j>=0;j--)
{
	printf("%c",hexa[j]);
}
}


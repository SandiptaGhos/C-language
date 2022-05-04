#include<stdio.h>
int main()
{
 int i=0;
 int n=0;
 long array[20];
 printf("Enter the range:\n");
 scanf("%d",n);
 array[0]=-1;
 array[1]=1;
 printf("\n Displaying Fibonacci Series:\n");
 for(i=2;i<=n+1;i++)
 {
    array[i]=array[i-1]+array[k-2];
    printf("%ld",array[i]);
 }
 return 0;
 }

#include<stdio.h>
void main()
{
int arr[10]={54,89,37,12,31,3};
int countprime=0;
int index=0;
int i=0;
int countFactors=0;
for(index=0;index<10;index++)
{
  countFactors=0;
  for(i=1;i<=arr[index];i++)
  {
    if(arr[index]%i==0)
    countFactors++;
   }
   if(countFactors==2)
   countprime++;
   }
   if(countprime%2==1)
   printf("TRUE");
   else
   printf("FALSE");
}


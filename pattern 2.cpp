/*
     **********
     ****  ****
     ***    ***
     **      **
     *        *
*/

#include<stdio.h>
int main()
{
int i, j, k, l, m = 1;
for(i = 5;i > 0;i--)
{
for(j = i;j > 0;j--)
{
printf("*");
}
for(k = 1;k < m;k++)
{
printf(" ");
}
m = m + 2;
for(l= i;l> 0;l--)
{
printf("*");
}
printf("\n");
}
return 0;
}

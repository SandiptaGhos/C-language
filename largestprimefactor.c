#include <stdio.h>
int main()
 {
   long int n;
   printf("enter the number:");
   scanf("%d",&n);
   long int d=2, a= 0, mf;
   while(n!=0)
    {
      if(n % d !=0)
         d = d + 1;
      else
      {
         mf= n;
         n = n / d;
         if(n == 1)
         {
            printf("%d is the largest prime factor",mf);
            a= 1;
            break;
         }
      }
   }
   return 0;
}

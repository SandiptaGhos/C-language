//write a program in c to compare two strings without using library function

#include<stdio.h>
 
int main()
 {
   char str1[50], str2[50];
   int i=0;
   printf("\nEnter two strings :");
   fgets(str1,50,stdin);
   fgets(str2,50,stdin);
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("str1 > str2");
   else if (str1[i] < str2[i])
      printf("str1 < str2");
   else
      printf("str1 = str2");
   return 0;
}

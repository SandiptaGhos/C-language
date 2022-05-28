//write a program in c to check whether a letter in uppercase or not

#include<stdio.h>
int main()
 {
   char ch;
   printf("\nInput The Character : ");
   scanf("%c", &ch);
   if (ch >= 'A' && ch <= 'Z')
   printf("Character is in Upper Case");
   else
   printf("Character is Not in Upper Case");
   return 0;
}

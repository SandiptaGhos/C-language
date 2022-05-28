//write a program in c to check whether a letter is lowercase or not

#include<stdio.h>
int main() 
{
   char ch; 
   printf("\nInput a Character : ");
   scanf("%c", &ch);
   if (ch >= 'A' && ch <= 'Z')
   {
   printf("Character is uppercase Letters");
   } 
   else if (ch >= 'a' && ch <= 'z')
   {
    printf("Character is Lowercase Letters");
   }
    else
   {
    printf("Non alphabet character");
   }
   return 0;
}

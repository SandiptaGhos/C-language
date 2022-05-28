//write a program in c to convert a string to uppercase

#include <stdio.h>
int main()
{
    char str[1000];
    int i;
    printf("Input a string in lowercase: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf(" the above string in Uppercase: %s",str);
    return 0;
}

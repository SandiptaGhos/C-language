//write a program in c to convert a string to lowercase

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Input a string in uppercase: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("here is the above string in Lower case: %s", str);
    return 0;
}

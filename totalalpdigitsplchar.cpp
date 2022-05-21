//write a program in c to count total number of alphabets,digits and special characters in a string

#include <stdio.h>
int main()
{
    char str[100];
    int a, d, s, i;
    a=d=s=i=0;	
    printf("Enter the string : ");
    fgets(str, 100, stdin);	
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            a++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            d++;
        }
        else
        {
            s++;
        }

        i++;
    }

    printf("No. of alphabets in the string is : %d\n", a);
    printf("No. of digits in the string is : %d\n", d);
    printf("No. of special characters in the string is : %d\n", s);
    return 0;
}


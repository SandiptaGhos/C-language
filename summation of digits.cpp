#include <stdio.h>
void main()
{
    int arr[50], copy[50], var[50], display[50];
    int i = 0, j = 0;
    int sumOfDigits = 0;
    int size = 0;
    
    printf("enter the size of the array ");
    scanf("%d", &size);
    
    printf("\n enter the elements of array \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < size; i++)
    {
        copy[i] = arr[i];
    }
    
    for (i = 0; i < size; i++)
    {
        sumOfDigits = 0;

        while (copy[i] != 0)
        {
            var[i] = copy[i] % 10;
            sumOfDigits += var[i];
            copy[i] = copy[i] / 10;
        }
        display[i] = sumOfDigits; 
    }
    printf("\n");
    printf("Original array: ");
    
    for (i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    
    printf("\nsum of digits of each elements \n");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", display[i]);
    }
}

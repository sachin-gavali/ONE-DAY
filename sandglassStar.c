// Day -2
// pattern -7
#include <stdio.h>
int main()
{
    int size;
    printf(" Enter Size : ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        for (int k = 2; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = i; j <= size; j++)
        {
            printf("*");
        }
        for (int s = i; s < size; s++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 1; i <=size; i++)
    {
        for (int k = i+1; k <= size; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int s = 1; s < i; s++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
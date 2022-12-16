// DAY - 2
// PATTERN - 5  RIGHT PASCAL'S TRIAGAL
#include <stdio.h>
int main()
{
    // outer loop
    int size;
    printf(" Enter Size : ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        // innner loop
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for (int i = 1; i <= size; i++)
    {
        // innner loop
        for (int j = i; j <= size; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    
    return 0;
}
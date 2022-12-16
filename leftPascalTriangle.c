// DAY -2
//patttern  6
// left Pascal triangle
#include <stdio.h>
int main()
{
    int size;
    printf(" Enter Size : ");
    scanf("%d", &size);

    // frist triangle for space 1
    // outer loop
    for (int i = 1; i < size; i++)
    {
        // innner loop
        for (int k = i; k <= size; k++)
        {
            printf(" "); // Print space
        }
        // 2nd Triangle for star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n"); // new line
    }
    // 3rd triangle for space

    for (int i = 1; i <=size; i++)
    {
        // innner loop
        for (int k = 1; k <= i; k++)
        {
            printf(" "); // Print space
        }
        for (int j = i; j <= size; j++)
        {
            printf("*");
        }
        printf("\n"); // new line
    }
}
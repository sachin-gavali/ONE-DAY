// Day - 2
// Pattern -4
// right down mirror
#include <stdio.h>
int main()
{
    int size;
    printf(" Enter Size : ");
    scanf("%d", &size);
    // Outer loop 
    for (int i = 1; i <= size; i++)
    {
          // For space loop 
        for (int k = 2; k <= i; k++)
        {
            printf(" ");// print space 
        }
        // inner looop 
        for (int j = i; j <= size; j++)
        {
            printf("*");
        }
        printf("\n");// new line 
    }
}
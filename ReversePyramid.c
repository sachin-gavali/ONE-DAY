// DAY - 1
// Q -2 Print a Right triagle
#include <stdio.h>
int main()
{

    int size;
    printf("Enter Size : ");

    // Input from user for size of patterns
    scanf("%d", &size);
    // outer loop
    for (int i = 1; i <= size; i++)
    {
        // inner loop
        for (int j = 1+1; j <= i; j++)
        {
            printf(" ");
        }
        // space loop k
        for (int k = i; k <=size; k++)
        {
            printf("*");
        }
        for(int s = i ; s < size; s++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
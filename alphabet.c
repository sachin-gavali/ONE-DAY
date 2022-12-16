// Day -2
// Pattern -8
// Alphabet A
#include <stdio.h>
int main()
{
    int size;
    printf(" Enter Size : ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if(j == 1 ){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
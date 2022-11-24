#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int input = 0;
    
    do
    {
        printf("input:");
        scanf("%d", &input);
    } while (input < 2 || input>9);

    for (int x = 1; x <= input; x++)
    {
        for (int y = 1; y <= input - x; y++)
        {
            printf("*");
        }
        for (int i = 1; i <= x; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
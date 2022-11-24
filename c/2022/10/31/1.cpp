#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double a = 0, output = 1;
    int b = 0;
    printf("input a:");
    scanf("%lf", &a);
    printf("input b:");
    scanf("%d", &b);
    if (b >= 0)
    {
        for (int i = 0; i < b; i++)
        {
            output *= a;
        }
    }
    else
    {
        for (int i = 0; i < abs(b); i++)
        {
            output /= a;
        }
    }
    printf("output:%E", output);
}
#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
    int output = 1;
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
    return output;
}

double my_fun(int n)
{
    double out = 0.0;
    for (int i = 1; i <= n ;i++)
    {
        out += 1.0 / add(2, i);
        //printf("%d", add(2, i));
    }
    return out;
}


int main(void)
{
    int Data;
    printf("input:");
    scanf("%d", &Data);
    printf("%f",my_fun(Data));
}
#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n != 1)
       return n + sum(n - 1);

    return 1;
} 

int main()
{

    int Data;
    printf("input:");
    scanf("%d", &Data);
    printf("%d", sum(Data));
}
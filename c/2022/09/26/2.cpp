#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b;
    printf("input a:");
    scanf("%d", &a);
    printf("input b:");
    scanf("%d", &b);

    printf("a+b(8): %+06o \n", a + b);
    printf("a+b(10):%+06u \n", a + b);
    printf("a+b(16):%+06x \n", a + b);
    printf("a/b:%10.5f \n", (float)a / b);
}
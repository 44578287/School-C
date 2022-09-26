#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, b;
    printf("input a:");
    scanf("%d", &a);
    printf("input b:");
    scanf("%d", &b);

    printf("a+b:%d\n", a + b);
    printf("a-1b:%d\n", a - b);
    printf("a*b:%d\n", a * b);
    printf("a/b:%f\n", (float)a / b);
}
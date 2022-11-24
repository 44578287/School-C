#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int output = 0;
    printf("班级.......\n");
    for (int i = 1; i <= 2000;i++)
    {
        output += i;
    }
    printf("答案:%d",output);
}
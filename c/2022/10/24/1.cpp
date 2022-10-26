#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int sum = 0, Total = 0;
    printf("请输入时数:");
    scanf("%d", &sum);

    if(sum <= 60)
    {
        Total = sum * 75;
    }
    else if (sum > 60 && sum <= 75)
    {
        Total = (sum - 60) * (75 * 1.25) + 60 * 75;
    }
    else
    {
        Total = (sum - 75) * (75 * 1.75) + 15*1.25*75 + 60 * 75;
    }

    printf("总薪资:%d",Total);
}
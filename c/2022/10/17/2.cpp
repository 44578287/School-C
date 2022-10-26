#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int Roads = 0, Speed = 0;
    printf("1.一般道路");
    printf("2.国道一号");
    printf("3.国道三号");
    printf("输入道路(代号):");
    scanf("%d", &Roads);
    printf("输入时速(km):");
    scanf("%d", &Speed);

    switch (Roads)
    {
        case 1:
            if (Speed > 50)
            {
                Speed = Speed - 50;
                if (Speed < 20)
                    printf("罚款1600元");
                else if (Speed < 40)
                    printf("罚款1800元");
                else if (Speed < 60)
                    printf("罚款2000元");
                else if (Speed < 80)
                    printf("罚款8000元");
                else if (Speed < 100)
                    printf("罚款12000元");
                else if (Speed >= 100)
                    printf("罚款24000元");
            }
            else
            {
                printf("无需缴纳!");
            }
            break;
        case 2:
            if (Speed > 100)
            {
                Speed = Speed - 100;
                if (Speed < 20)
                    printf("罚款3000元");
                else if (Speed < 40)
                    printf("罚款3500元");
                else if (Speed < 60)
                    printf("罚款5000元");
                else if (Speed < 80)
                    printf("罚款8000元");
                else if (Speed < 100)
                    printf("罚款12000元");
                else if (Speed >= 100)
                    printf("罚款24000元");
            }
            else
            {
                printf("无需缴纳!");
            }
            break;
        case 3:
            if (Speed > 110)
            {
                Speed = Speed - 110;
                if (Speed < 20)
                    printf("罚款3000元");
                else if (Speed < 40)
                    printf("罚款3500元");
                else if (Speed < 60)
                    printf("罚款5000元");
                else if (Speed < 80)
                    printf("罚款8000元");
                else if (Speed < 100)
                    printf("罚款12000元");
                else if (Speed >= 100)
                    printf("罚款24000元");
            }
            else
            {
                printf("无需缴纳!");
            }
            break;
        default:
            printf("输入代号错误!");
            break;

    }
}
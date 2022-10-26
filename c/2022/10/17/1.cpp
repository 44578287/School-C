#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int Height = 0, BodyWeight = 0;

    printf("input Height:");
    scanf("%d", &Height);
    printf("input BodyWeight:");
    scanf("%d", &BodyWeight);

    float HeightToM = Height / (float)100;

    double BMI = (float)BodyWeight / (HeightToM * HeightToM);
    printf("You BMI:%1.3f\n",BMI);

    if (BMI < 18.5)
        printf("过轻!");
    else if (BMI >= 18.5 && BMI <= 24.0)
        printf("正常");
    else
        printf("过重!");
}
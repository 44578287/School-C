#include <stdio.h>
#include <stdlib.h>
#include <deque>  //代替List

#define MAX 3

int main()
{
    int max = 0,min,array[MAX] = {0},DataCont = 0;
    float ave = 0;
    do
    {
        printf("请输入第%d个数据:", i);
        scanf("%d", &array[i]);
    } while (DataCont <= MAX && );
    for (int i = 0; i < MAX; i++)
    {
        if(array[i] > max)
            max = array[i];
        if(array[i] > min)
        {
            if(array[i] < min)
            {
                min = array[i];
            }
        }
            
        
        ave += array[i];
    }
    printf("MAX: %d, min: %d, array: %0.1f",max,min,(float)ave/(float)MAX);
}
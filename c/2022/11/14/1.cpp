#include <stdio.h>
#include <stdlib.h>

void asciiDisplay(char Data)
{
    printf("ascii code of '%c' = %x(hex)\n",Data,Data);
    printf("ascii code of '%c' = %d(dec)", Data,Data);
}


int main(void)
{
    char Data;
    printf("input:");
    scanf("%c", &Data);
    asciiDisplay(Data);
}
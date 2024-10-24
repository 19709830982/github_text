#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    float c = 0;
    float price = 0;

    scanf("%f",&c);
    if (c <= 110)
    {
        price = (float)c * 0.5;
    }
    else if (c > 110 && c <= 210)
    {
        price = 55 + ((float)c-110) * 0.55;
    }
    else if(c>210)
    {
        price = 55 + 100 * 0.55 + ((float)c - 210) * 0.7;
    }
    printf("%.2f",price);


    return 0;
}
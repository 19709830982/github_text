#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int runnian(int year);

int main(void)
{
    int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int year = 0; int a = 0;
    scanf("%d %d",&year,&a);

    if (runnian(year) == 1)
    {
        month[1]++;
    }
    printf("%d\n",month[a-1]);
    return 0;
}

int runnian(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
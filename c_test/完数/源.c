#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d",&a,&b);
    for (int i = a+1; i < b; i++)
    {
        if (wanshu(i) != 0)
        {
            printf("%d\n",wanshu(i));
        }
        
    }
    return 0;
}

int wanshu(int num)
{
    int count = 0;
    for (int n = 1; n < num; n++)
    {
        if (num % n == 0)
        {
            count = count + n;
        }
        
    }
    if (count == num)    return num;
    else return 0;
}
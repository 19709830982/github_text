#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
    int a, b,zdgys=0;
    int n=0;
    scanf("%d %d",&a,&b);

    for (int i = 1; i <= b; i++)
    {
        for (int m = 1; m <= a; m++)
        {
            if (0 == a % m)
            {
                n = m;
            }
            if (0 == b % i && i ==n)
        {
            zdgys = n;
        }

        }
        
    }
    if (a == 0)zdgys = b;
    else if (b == 0)zdgys = a;
    printf("%d\n",zdgys);
    return 0;
}

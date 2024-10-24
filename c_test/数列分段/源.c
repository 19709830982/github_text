#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n = 0; int m = 0; int x=0;
    int a[1000]; int count = 1;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        
        
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
    }

    printf("%d\n",count);


    return 0;
}
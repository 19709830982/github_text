#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
    int a = 3;
    pow(a,3);
    int shu[10] = {1,2,3,4,5,6};
    shuzu(shu, 10);
    return 0;
}

int shuzu(int ar[],int n)
{
    int i;
   
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes .\n",sizeof ar);
}
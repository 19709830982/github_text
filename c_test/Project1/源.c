#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int v[3] = { 1,2,3 };
    printf("%zu\n",sizeof(int));
    printf("%zu\n",sizeof(v[0]));
    printf("%zu\n",sizeof(v));
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d",&a);
	b = a / 100;
	c = a % 100 / 10;
	d = a % 10;
	printf("%d\n",b+c+d);
}
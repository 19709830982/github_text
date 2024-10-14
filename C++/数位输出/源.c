#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(void)
{
	int a, b, c, d, e, x;
	scanf("%d",&x);
	a = x / 10000;
	b = x %10000/ 1000;
	c = x %1000/ 100;
	d = x %100/ 10;
	e = x %10/ 1;
	printf("%d %d %d %d %d",a,b,c,d,e);

	return 0;
}
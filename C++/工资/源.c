#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b, c, d, e, f,g;
	scanf("%d",&a);
	b = a /100;
	c = a % 100 / 50;
	d = a % 50 / 20;
	e = a %50% 20 / 10;
	f = a % 10 / 5;
	g = a % 5;
	printf("%d %d %d %d %d %d\n",b,c,d,e,f,g);
}
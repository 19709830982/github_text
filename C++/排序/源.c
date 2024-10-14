#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b, c, t = 0;
	scanf("%d%d%d",&a,&b,&c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;

	}
	if(a*a+b*b==c*c)
	{
		printf("直角三角形");
	}
	if (a * a + b * b > c * c)
	{
		printf("锐角三角形");
	}
	if (a * a + b * b < c * c)
	{
		printf("钝角三角形");
	}
	if (a + b > c&&(a==b||b==c))
	{
		printf("等腰三角形");
	}
	if (a == b && a == c)
	{
		printf("等边三角形");
	}
	if (a + b <= c)
	{
		printf("不是三角形");
	}
	return 0;
}
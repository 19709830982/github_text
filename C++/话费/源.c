#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double t, a, b;
	scanf("%lf",&t);
	a = 0.6 * t;
	b = 50 + 0.4 * t;
	if (a < b)
	{
		printf("%.2lf\n%.2lf\nA",a,b);
	}
	else
	{
		printf("%.2lf\n%.2lf\nB",a,b);
	}

}
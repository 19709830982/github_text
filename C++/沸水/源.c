#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void p(void);

double c;
int main(void)
{
	int m, s;
	scanf("%d %d",&m,&s);
	double t = (double)m + (double)s / 60;
	
	if (t >= 0 && t <= 10)
	{
		c = 100 - 5*t;
		p();
	}
	if (t > 10 && t <= 30)
	{
		c = 50 - (t - 10);
		p();
	}
	if (t > 30 && t <= 50)
	{
		c = 30 - (t - 30) / 2;
		p();
	}
	if (t > 50)
	{
		c = 20;
		p();
	}
	return 0;
}
void p(void)
{
	printf("%.1lf",c);
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float s = 0;
	int t = 0;
	scanf("%f %d",&s,&t);
	int p1, p2;
	if (s <= 3) 
	{
		p1 = 10;
	}
	else if (s > 3&&s<=10)
	{
		p1 = 10 + (s - 3) * 2;
	}
	else if (s > 10)
	{
		p1 = 24 + (s - 10) * 3;
	}
	p2 = t / 5 * 2;
	int p = p1 + p2;
	printf("%d\n",p);
}
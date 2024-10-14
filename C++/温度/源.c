#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int F = 0;
	scanf("%d",&F);
	double C = (F - 32) * 5 / 9;
	printf("%.2f\n",C);
	return 0;
}
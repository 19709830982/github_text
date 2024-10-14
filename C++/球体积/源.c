#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
const double PI = 3.14;
int main(void)
{
	double r;
	scanf("%lf",&r);
	double v =  PI * r * r * r* 4/3;
	printf("%.2f\n",v);


	return 0;
}
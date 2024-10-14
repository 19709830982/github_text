#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main(void)
{
	double p, n, r;
	scanf("%lf%lf",&r,&n);
	p = pow(1 + r,n);
	printf("%.2lf",p);
	return 0;
}
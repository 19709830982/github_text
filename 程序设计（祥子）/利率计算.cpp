#include<stdio.h>
#include<cmath>
int main()
{
	double p,r,n;
	scanf("%lf%lf",&r,&n);
	p=pow((1+r),n);
	printf("%.2f",p);
	return 0;
}

#include<stdio.h>
#include<cmath>
int main()
{
	double p,d,r,m,n;
	scanf("%lf%lf%lf",&d,&p,&r);
	n=p-d*r;
	m=(log(p)-log(n))/log(1+r);
	printf("%.2f",m);
	return 0;
}

#include<stdio.h>
#include<cmath>
int main()
{
	float a,b,c,n;
	scanf("%f",&n);
	a=19.32;
	b=10.53;
	c=8.9;
	printf("%.2f\n",a*pow(n,3));
	printf("%.2f\n",b*pow(n,3));
	printf("%.2f\n",c*pow(n,3));
	return 0;
}

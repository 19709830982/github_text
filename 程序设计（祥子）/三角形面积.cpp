#include<cmath>
#include<stdio.h>
int main()
{
	float a,b,c,p,s;
	scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)*1.0/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2f",s);
	return 0;
}

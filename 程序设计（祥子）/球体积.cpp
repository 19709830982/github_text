#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	float c,d;
	c=a/20*a/20*a/20*4*1.0/3*7.86*3.1415926;
	d=b/20*b/20*b/20*4*1.0/3*19.3*3.1415926;
	printf("%.3f %.3f\n",c,d);
	return 0;
}

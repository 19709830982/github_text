#include<stdio.h>
int main()
{
	int h,m;
	float t,T;
	scanf("%d%d",&h,&m);
	t=h+m*1.0/60;
	T=4*t*t/(t+2)-20;
	printf("%.2f\n",T);
	return 0;
}

#include<stdio.h>
int main()
{
	int D,H;
	float t,j;
	scanf("%d%d",&D,&H);
	t=(D/2)*(D/2)*H*7.86*3.1415926/(1000*3);
	j=(D/2)*(D/2)*H*19.3*3.1415926/(1000*3);
	printf("%.3f %.3f",t,j);
	return 0;
}

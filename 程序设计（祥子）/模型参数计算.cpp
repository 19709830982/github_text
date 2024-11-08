#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	float CL,tD,SP;
	CL=(a+sqrt(b*a+1));
	tD=a*pow(CL+b,2);
	SP=tD*CL+pow(b,2);
	printf("CL=%.2f tD=%.2f SP=%.2f",CL,tD,SP);
	return 0;
}

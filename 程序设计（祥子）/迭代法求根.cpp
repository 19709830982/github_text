#include<stdio.h>
#include<math.h>
int main()
{
	float a,x1,x2,c,d;
	scanf("%f",&a);
	d=a*1.0;
		c=sqrt(d);
	for(x2=c;x2-x1>=0.00001;){
		x1=x2;
		x2=0.5*(x1+d/x1);
	}
	printf("%.5f",x2);
	return 0;
}

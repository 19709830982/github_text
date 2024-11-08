#include<stdio.h>
#include<cmath>
int main()
{
	float a,b,c,d,e=0.0275,f=0.021,g=0.015,h=0.0035;
	a=1000.0*pow(1+e,3)*pow(1+f,2);
	b=1000.0*pow(1+f,2)*pow(1+e,3);
	c=1000.0*(1+g)*pow(1+a,2)*pow(1+g,2);
	d=1000.0*pow(1+e,3)*pow(1+h,8);
	printf("先存 3 年定期再存 2 年定期，最终金额：%.2f\n",a);
	printf("先存 2 年定期再存 3 年定期，最终金额：%.2f\n",b);
	printf("现存 1 年定期，再存 2 两年定期，再分 2 年存一年定期，最终金额：%.2f\n",c);
	printf("先存 3 年定期再存 2 年活期，最终金额：%.2f\n",d);
	return 0;
}

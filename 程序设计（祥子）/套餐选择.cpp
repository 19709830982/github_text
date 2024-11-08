#include<stdio.h>
int main()
{
	float a,b,t;
	scanf("%f",&t);
	a=0.6*t;
	b=50+0.4*t;
	printf("%.2f\n",a);
	printf("%.2f\n",b);
	if(a>=b){
		printf("B");
	}
	else{
		printf("A");
	}
	return 0;
}

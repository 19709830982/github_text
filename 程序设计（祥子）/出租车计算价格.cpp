#include<stdio.h>
int main()
{
	int t,a,b,c;
	float s;
	scanf("%f%d",&s,&t);
	a=t/5*2;
	if(s<=3){
		b=a+10;
		printf("%d",b);
	}
	else if(s>3&&s<=10){
		c=s-3;
		b=(a+10+c*2)*1.0+0.5;
		printf("%d",b);
	}
	else {
		b=(a+10+7*2+(s-10)*3)*1.0+0.5;
		printf("%d",b);
	}
	return 0;
}

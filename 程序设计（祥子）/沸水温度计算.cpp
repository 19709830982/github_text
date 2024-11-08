#include<stdio.h>
int main()
{
	int m,s;
	float c,t;
	scanf("%d%d",&m,&s);
	t=(m+s*1.0/60);
	if(0<=t&&t<=10){
		printf("%.1f",c=100-5*t);
	}
	else if(10<t&&t<=30){
		printf("%.1f",c=50-(t-10));
	}
	else if(30<t&&t<=50){
		printf("%.1f",c=30-(t-30)/2);
	}
	else {
		printf("%.1f",c=20);
	}
}

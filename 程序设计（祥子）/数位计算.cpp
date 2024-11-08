#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	if(n<0){
		a=-(n/100);
		b=-(n%100/10);
		c=-(n%10);
		printf("%d %d %d\n",a,b,c);
		printf("%d %d %d",c,b,a);
	}
	else{
		a=n/100;
		b=n%100/10;
		c=n%10;
		printf("%d %d %d\n",a,b,c);
		printf("%d %d %d",c,b,a);
	}
	return 0;
}

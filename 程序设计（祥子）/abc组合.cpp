#include<stdio.h>
int main()
{
	int a,b,c,n,d;
	scanf("%d",&n);
	for(int i=100;i<1000;i++){
		d=i%100%10*100+i/10%10*10+i/100;
		a=i/100;
		b=i%100/10;
		c=i%10;
		if(i+d==n){
			printf("%d %d %d\n",a,b,c);
		}
	}
	return 0;	
}

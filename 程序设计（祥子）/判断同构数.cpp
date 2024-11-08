#include<stdio.h>
#include<cmath>
int main()
{
	int e,d,n,m,sum=0;
	scanf("%d",&n);
	e=n;
	m=n*n;
	while(n!=0){
		if(m%10==n%10&&n%10!=0){
			n=n/10;
			m=m/10;
			sum++;
		}
		else break;}
		d=pow(10,sum);
		if(n/d==0){
			printf("%d 1",e);
		}
		else{
			printf("%d 0",e);
		}
	}

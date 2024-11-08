#include<stdio.h>
#include<cmath>
int main()
{
	int n,a[1000],min,g,b,c,d,e,f;
	scanf("%d",&n);
	for(int i=0;i<2*n;i++){
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<2*n;i+=2){
	c=a[i]-4;
	d=a[i]+4;
	e=a[i+1]-4;
	f=a[i+1]+4;
	g=c*c+e*e;
	b=d*d+f*f;
	min=g<b?g:b;
	if(min==g){
		printf("1 ");
	}else{
		printf("2 ");
	}
	}

	
	
}

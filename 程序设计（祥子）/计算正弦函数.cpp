#include<stdio.h>
#include<math.h>
int main()
{
	int e=1,n,count=1,f=1;
	float sinx=0,x;
	scanf("%d%f",&n,&x);
	while(e<=2*n-1){
	for(int d=1;d<=e;d++){
		count*=d;
		}
		sinx+=x*1.0*f/count;
		e+=2;
		f=-f;
		x*=x*x;
	}
	printf("%.4f",sinx);
	return 0;
}

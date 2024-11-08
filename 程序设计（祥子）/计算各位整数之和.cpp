#include<stdio.h>
int main()
{
	int n,d,sum=0;
	scanf("%d",&n);
	for(;n!=0;){
		d=n%10;
		n=n/10;
		sum+=d;
	}
	printf("%d\n",sum);
	return 0;
}

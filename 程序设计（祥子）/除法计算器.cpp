#include<stdio.h>
int main()
{
	int m,n,q,r,d,e;
	scanf("%d%d%d%d",&m,&n,&d,&e);
	q=m/n;
	r=m%n;
	if(n!=0){
	if(m/n==d&&m%n==e)
	{printf("yes");}
	else{printf("%d %d\n",q,r);}
	return 0;}
}

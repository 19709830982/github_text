#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	while(scanf("%d",&n)&&n)
	{
		if(n%2)
		sum+=n;
	}
	printf("%d",sum);
}

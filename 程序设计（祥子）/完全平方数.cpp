#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m=sqrt(n);
	if(m*m==n){
		printf("%d",m);
	}
	else printf("no");
	return 0;
}

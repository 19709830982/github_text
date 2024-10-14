#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int m, n, q, r;
	scanf("%d%d",&m,&n);
	int c = m / n, y = m % n;
	scanf("%d%d",&q,&r);
	if (q == c && y == r)
	{
		printf("yes\n");
	}
	else printf("%d %d\n",c,y);


	return 0;


}
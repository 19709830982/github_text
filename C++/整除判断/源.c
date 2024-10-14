#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d %d",&a,&b );
	c = a / b;
	d = a - b * c;
	if (d == 0)
	{
		printf("yes");
	}
	else printf("%d %d",c,d);



	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d",&a,&b);
	int h = a + b,
		c = a - b,
		j = a * b,
		s = a / b;
	printf("%d\n%d\n%d\n%d",h,c,j,s);
	return 0;
}
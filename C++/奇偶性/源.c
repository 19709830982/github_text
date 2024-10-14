#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main (void)
{
	int a;
	scanf("%d",&a);
	int b = a % 2;
	if (b == 0) printf("Å¼Êý\n");
	else if(b==1) printf("ÆæÊý\n");
}
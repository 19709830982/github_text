#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main (void)
{
	int a;
	scanf("%d",&a);
	int b = a % 2;
	if (b == 0) printf("ż��\n");
	else if(b==1) printf("����\n");
}
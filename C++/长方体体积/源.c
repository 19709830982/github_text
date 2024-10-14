#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float a, b, c;
	scanf("%f%f%f",&a,&b,&c);
	float V = a * b * c;
	printf("%.3f",V);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a, b, c, t = 0;
	scanf("%d%d%d",&a,&b,&c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;

	}
	if(a*a+b*b==c*c)
	{
		printf("ֱ��������");
	}
	if (a * a + b * b > c * c)
	{
		printf("���������");
	}
	if (a * a + b * b < c * c)
	{
		printf("�۽�������");
	}
	if (a + b > c&&(a==b||b==c))
	{
		printf("����������");
	}
	if (a == b && a == c)
	{
		printf("�ȱ�������");
	}
	if (a + b <= c)
	{
		printf("����������");
	}
	return 0;
}
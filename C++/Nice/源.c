#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a = 0;
	scanf("%d",&a);
	if (a % 2 == 0 && a % 3 != 0 && a % 5 != 0)
	{
		printf("Nice");

	}
	else if (a % 3 == 0 && a % 5 != 0 && a % 2 != 0)
	{
		printf("Good");
	}
	else if (a%5==0&&a%3!=0&&a%2!=0)
	{
		printf("Best");
	}
	else
	{ 
		printf("Bad"); 
	}

}
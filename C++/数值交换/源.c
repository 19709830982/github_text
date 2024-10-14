#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int m = 0,n=0;
	int count = 0;
	int number;
	scanf("%d %d",&m,&n);
	for (number = m; number<=n; ++number)
	{
		if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2)
		{
			
			printf("%d\n",number);
			
		}
	}


	return 0;
}
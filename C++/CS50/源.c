#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void meow(void)
{
	printf("meow\n");
}


int main(void)
{
	int a = 0;
	printf("what's a?");
	scanf("%d",&a);
	while (a > 0)
	{
		meow();
		a--;
		
	}

}

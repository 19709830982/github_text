#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	int age;
//	float assets;
//	char pet[30];
//
//	printf("Enter your age ,assets and your favorite pet");
//	scanf("%d%f%s",&age,&assets,pet);
//	printf("Your age is %d\nYour assets is %.2f\nYour favorite pet is %s\n",age,assets,pet);
//
//	return 0;
//}
int main(void)
{
	int a;
	scanf("%d",&a);
	
	while (a > 0)
	{
        a--;
		printf("%d\n",a);
	}
	return 0;
}
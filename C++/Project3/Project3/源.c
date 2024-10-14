#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//
//}
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入一个数字");
//	printf("请输入一个数字");
//
//	scanf("%d%d",&a,&b);
//	
//	/*scanf("",&b);*/
//	sum = a + b;
//	printf("%d+%d=%d\n", a, b, sum);
//	return 0;
// 
//}
//
#include<stdio.h>
//int main(void)
//{
//	/*int num = 2;
//	printf("%d+%d=%d\n",num,num,num+num);*/
//	int age=0;
//	
//	printf("age=");
//	scanf("%d",&age);
//	int days = age * 365;
//	printf("days=%d\n",days);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	double y = (1 + 1 / n) ^ n;
//	printf("%f\n",y);
//	return 0;
//}
//int main(void)
//{
//	int a,b,c,min;
//	
//	printf("请输入三个数字：");
//	scanf("%d%d%d",&a,&b,&c);
//	min = a;
//	if (b < min) {
//		min = b;
//	}
//	if (c < min) {
//		min = c;
//	}
//	printf("%d\n",min);
//	return 0;
//}
int main(void)
{
	int a, b, c;
	printf("请输入abc:");
	scanf("%d%d%d",&a,&b,&c);
	if (a > b)
	{
		int t;
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		int t;
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		int t;
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}

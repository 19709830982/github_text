#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	double Fe = 7.86, Au = 19.3, PI = 3.1415926;
	int dFe, dAu;
	printf("请输入铁球的直径：");
	scanf("%d",&dFe);
	printf("请输入金球的直径：");
	scanf("%d",&dAu);
	double MFe = Fe * 4 / 3 * PI * dFe * dFe * dFe / 8/1000;
	double MAu = Au * 4 / 3 * PI * dAu * dAu * dAu / 8/1000;
	printf("MFe=%.3f,MAu=%.3f",MFe,MAu);
	return 0;
}
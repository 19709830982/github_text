#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int h = 0, m = 0; double t; double T;
	scanf("%d,%d", &h, &m);
	 t = (double)h + (double)m / 60;
	 T = 4 * t * t / (t + 2) - 20;
	printf("%.2lf\n", T);

	return 0;
}

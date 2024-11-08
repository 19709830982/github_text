#include<stdio.h>
int main()
{
	int a[1000],max=0;
	scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
	for(int i=0;i<=3;i++){
		max=max>a[i]?max:a[i];
	}
	printf("%d",max);
	return 0;
}

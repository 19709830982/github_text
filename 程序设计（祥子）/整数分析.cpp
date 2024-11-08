#include<stdio.h>
int main()
{
	int n,sum=0,a[1000],min=9,max=0;
	scanf("%d",&n);
	if(n!=0){
	for(int i=0;n!=0;i++){
		a[i]=n%10;
		n=n/10;
		sum+=1;
		min=a[i]<min?a[i]:min;
		max=a[i]>max?a[i]:max;
	}
	printf("%d %d %d",sum,max,min);}
	else printf("1 0 0");
	return 0;
}

#include<stdio.h>
int main()
{
	int n,a[100],min=10000,sum;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(min>a[i]){
			min=a[i];
			sum=i;
		}
		a[0]+=a[i];
	}
	printf("%d %d",a[0],sum);
	return 0;
}

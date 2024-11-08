#include<stdio.h>
int main()
{
	int n,a[1000],max=0,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n;i++){
		d=a[i]-a[i-1];
		if(d<0){
			d=-d;
		}if(d>max){
		max=d;
		}
	}
	printf("%d",max);
	return 0;
}

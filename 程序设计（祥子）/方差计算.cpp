#include<stdio.h>
#include<math.h>
int main()
{
	int n,x=0,y=0,arr[100],d,p;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		x+=arr[i];
	}
	d=x/n;
	for(int i=0;i<n;i++){
		y+=pow(arr[i]-d,2);
	}
	p=y/n;
	printf("%d",p);
	return 0;
}

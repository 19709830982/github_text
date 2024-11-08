#include<stdio.h>
int main()
{
	int n,sum=0,a[1000];
	scanf("%d",&n);
	for(int e=0;e<n;e++){
		scanf("%d",&a[e]);
	}
	for(int i=0;i<n;i++){
		if(a[i]!=a[i-1]||i==0){
           sum++;
		}
		else{
			continue;
		}
	}
	printf("%d",sum);
	return 0;
}

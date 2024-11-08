#include<stdio.h>
int main()
{
	int n,a[100],sum=0,teap;
	scanf("%d",&n);
	for(int i=0;n!=0;i++){
		a[i]=n%10;
		n=n/10;
		sum+=1;
	}
	for(int i=0;i<sum;i++){
		for(int j=sum-1;j>i;j--){
			if(a[i]>a[j]){
			teap=a[i];
			a[i]=a[j];
			a[j]=teap;
			}
		}printf("%d ",a[i]);
	}return 0;
}

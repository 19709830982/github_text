#include<stdio.h>
int main()
{
	int a[1000],n;
	for(int i=0;i<4;i++){
	scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3-i;j++){
			if(a[j]>a[j+1]){
				n=a[j];
				a[j]=a[j+1];
				a[j+1]=n;
			}
		}
	}
for(int i=0;i<4;i++){
	printf("%d ",a[i]);}
	return 0;
}

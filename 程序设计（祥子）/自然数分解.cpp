#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[1000];
	scanf("%d",&n);
		for(int i=0;i<n;i++){
			a[i]=n*n-(n-1)+2*i;
		printf("%d ",a[i]);
		}
		return 0;
	}
	
	
	

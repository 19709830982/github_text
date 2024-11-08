#include<stdio.h>
int main()
{
	int n,d,sum=0;
	scanf("%d",&n);
	for(int i=n-1;i>1;i--){
		d=n%i;
		if(d==0){
			printf("no");
			return 0;
		}
		else{
			sum=sum+1;
			if(sum==n-2){
				printf("yes");
			}
		}
	}
	return 0;
}



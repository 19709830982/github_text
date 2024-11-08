#include<stdio.h>
int main()
{
	int n,count;
	scanf("%d",&n);
	for(count=1;n!=0;n--){
		count=count*n;
	}
	printf("%d",count);
	return 0;
}

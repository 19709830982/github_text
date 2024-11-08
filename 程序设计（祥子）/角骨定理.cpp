#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	for(;n!=1;){
		if(n%2==0){
			n=n/2;
			count+=1;
		}
		else{n=3*n+1;
		    count+=1;}
	}
	printf("%d",count);
	return 0;
}

#include<stdio.h>
int main()
{
	int n;
	float sum=0.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			sum+=i*1.0/(2*i-1);
		}
		else{	sum+=-i*1.0/(2*i-1);}
	}
	printf("%.3f",sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<100000){
		printf("%d",n/10);
	}
	else if(n>100000&&n<=200000){
		printf("%d",10000+(n-100000)*75/1000);
	}
	else if(n>200000&&n<=400000){
			printf("%d",17500+(n-200000)*50/1000);
		}
	else if(n>400000&&n<=600000){
			printf("%d",27500+(n-400000)*30/1000);
		}	
	else if(n>600000&&n<=1000000){
			printf("%d",33500+(n-600000)*15/1000);
		}
	else{
		printf("%d",39500+(n-1000000)/100);
	}
	return 0;
}

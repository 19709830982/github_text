#include<stdio.h>
int main()
{   float n; 
	scanf("%f",&n);
	if(n<=110){
		printf("%.2f",n*0.5);
	}
	else if(n>110&&n<=210){
		printf("%.2f",(n-110)*0.55+55);
	}
	else if(n>210){
		printf("%.2f",(n-210)*0.7+110);
	}
	return 0;
}

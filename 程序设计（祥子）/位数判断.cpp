#include<stdio.h>
int main()
{
	int m,sum=0;
	scanf("%d",&m);
	if(m==0){
		printf("%d",1);
	}
	else {for(;m!=0;){
		m/=10;
		sum+=1;
	}
	printf("%d",sum);}
	return 0;
}

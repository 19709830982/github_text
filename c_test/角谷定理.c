#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int n=0;
	int count1=0,count2=0;
	scanf("%d",&n);
	while(n!=1)
	{
		if(0==n%2)
		{
			n=n/2;
			count1++;
			
		}
		else
		{
			n=n*3+1;
			count2++;
			
		}
	}
	printf("%d\n",count1+count2);
	
	return 0;
 } 
 

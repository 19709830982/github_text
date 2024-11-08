#include<stdio.h>
int main()
{
	int m,n,sum1=0,sum2=0,s1=0,s2=0;
	scanf("%d %d",&m,&n);
	for(int i=1;i<m;i++){
		if(m%i==0){
			sum1+=i;
			s1+=1;
		}
	}
		for(int i=1;i<n;i++){
			if(n%i==0){
				sum2+=i;
				s2+=1;
			}
		}
		if(m==sum2&&n==sum1){
			printf("yes ");
		}else printf("no ");
		printf("%d %d",s1,s2);
		return 0;
}

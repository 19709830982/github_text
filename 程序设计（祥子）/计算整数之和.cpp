#include<stdio.h>
int main()
{
	int i,s,n;
	scanf("%d",&i);
	s=0;
	while(i!=0){
		n=i%10;
		s+=n;
		i=i/10;
	}
	printf("%d",s);
    return 0;
}

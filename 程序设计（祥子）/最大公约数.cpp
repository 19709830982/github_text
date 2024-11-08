#include<stdio.h>
int main()
{
	int a,b,c,max;
    scanf("%d %d",&a,&b);
	c=a<b?a:b;
	if(a!=0&&b!=0){	
	for(int i=1;i<=c;i++){
		if(a%i==0&&b%i==0){
			max=i;
		}
	}
	printf("%d",max);}
	else if(a==0) printf("%d",b);
	else if(b==0) printf("%d",a);
	return 0;
}

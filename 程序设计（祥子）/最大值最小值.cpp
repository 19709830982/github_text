#include<stdio.h>
int main()
{
	int a,b,min=100000,max=0;
scanf("%d %d",&a,&b);
int c[4]={(a+b)*(a+b),(a-b)*(a-b),a*a+b*b,a*a-b*b};
for(int i=0;i<4;i++){
	min=min<c[i]?min:c[i];
	max=max>c[i]?max:c[i];
}
	printf("%d %d",max,min);
	
	
}

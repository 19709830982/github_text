#include<stdio.h>
int main()
{
	int a,b,count=0,j,i;
	scanf("%d %d",&a,&b);
for(i=a;i<=b;i++){
	count=0;
	for(j=1;j<i;j++){
		if(i%j==0){
			count+=j;
		}
	}
		if(i==count){
				printf("%d\n",i);
			}
}	
	return 0;
}

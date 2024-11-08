#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	c=a/b;
	d=a%b;
if(a%b==0){printf("yes");
}
else{printf("%d %d\n",c,d);
}		
return 0;		
}

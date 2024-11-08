#include<bits/stdc++.h>
int main()
{
    int a,b,c,d,e,f;
	//用户输入两个整数
	printf("输入两个整数，用空格分隔：");
	scanf("%d%d",&e,&f);
	if (f>10000||f<-10000||e>10000||e<-10000){
		return 1;
	}
    a=e+f;
	b=e-f;
	c=e*f;
	d=e/f;
	printf("%d+%d=%d\n",e,f,a);
	printf("%d-%d=%d\n",e,f,b);
	printf("%d*%d=%d\n",e,f,c);
	printf("%d/%d=%d\n",e,f,d);
    return 0;
}

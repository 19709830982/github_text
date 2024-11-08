#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	 { case'+':printf("%d%c%d=%d",a,c,b,a+b);  break;
       case'-':printf("%d%c%d=%d",a,c,b,a-b);  break;
       case'*':printf("%d%c%d=%d",a,c,b,a*b);  break;
      if(b!=0){
	  	case'/':printf("%d%c%d=%d",a,c,b,a/b);  break;
	  	case'%':printf("%d%c%d=%d",a,c,b,a%b);  break;
	  }
	 }
	 return 0;
}

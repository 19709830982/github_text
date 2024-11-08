#include<stdio.h>
#include<math.h>
int main()
{
	int p,a,b,c;
	float s;
	scanf("%d %d %d",&a,&b,&c);
	p=a+b+c;
	s=sqrt(p*1.0/2*(p*1.0/2-a)*(p*1.0/2-b)*(p*1.0/2-c));
	if((a+b>c&&a+c>b&&b+c>a)&&(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)){
		printf("yes 1 %d %.2f",p,s);
	}
	else if((a+b>c&&a+c>b&&b+c>a)&&(a*a+b*b!=c*c&&a*a+c*c!=b*b&&b*b+c*c!=a*a)){
			printf("yes 2 %d %.2f",p,s);
		}
	else printf("no 3");
	return 0;
}

#include<stdio.h>
int main()
{
	int m,s,min,h;
	scanf("%d",&m);
	h=m/3600;
	min=m%3600/60;
	s=m%60;
	if(h<12){
		printf("%02d:%02d:%02d am",h,min,s);
	}
	else{
		printf("%02d:%02d:%02d pm",h,min,s);
	}
	return 0;
}

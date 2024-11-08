#include<stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	if(n<='Z'&&n>='A'){
		n=n+32;
	}
	if(n<='z'&&n>='a'){
		n=n-32;
	}
	printf("%c",n);
	return 0;
}

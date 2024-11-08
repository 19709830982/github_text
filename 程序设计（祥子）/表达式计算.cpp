#include <stdio.h>
int main(){
	int a,b;
	char c;
	scanf("%d %d %c", &a, &b, &c);
	if (c==42){
		printf("%d*%d=%d", a, b, a*b);
	}
	if (c==43){
		printf("%d+%d=%d", a, b, a+b);
	}
	if (c==45){
		printf("%d-%d=%d", a, b, a-b);
	}
	if (c==47){
		printf("%d/%d=%d", a, b, a/b);
	}
	if (c==37){
		printf("%d%%%d=%d", a, b, a%b);
	}
}

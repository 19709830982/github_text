#include <stdio.h>
int main(){
	int m;
	scanf("%d", &m);
	if (m>89){
		printf("A");
	}
	else if (m>79){
		printf("B");
	}
	else if (m>69){
		printf("C");
	}
	else if (m>59){
		printf("D");
	}
	else {
		printf("E");
	}
	return 0;
}

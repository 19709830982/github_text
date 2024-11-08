#include <stdio.h>
#include <cmath>
int main(){
	int n;
	scanf("%d", &n);
	if (n%2==1){
		printf("-1");
	}
	else {
		for (int i=32;i>0;i--){
			if (n>=pow(2,i)){
				printf("%d ", (int)pow(2,i));
				n-=pow(2,i);
			}
			if (n==0){
				break;
			}
		}
	}
	return 0;
}

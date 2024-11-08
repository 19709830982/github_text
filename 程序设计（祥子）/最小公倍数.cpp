#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	for (int i=max(a,b);;i++){
		if (i%a==0 && i%b==0){
			printf("%d", i);
			break;
		}
	}
	return 0;
}

#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;
int judgesushu(int a){
	int flag=1;
	for (int i=2;i<=sqrt((double)a);i++){
		if (a%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
//判断是否为素数
void produce(int b,int c[]){
	int i=2;
	for (int j=0;j<b;j++){
		for (i;;i++){
			if (judgesushu(i)){
				c[j]=i;
				i+=1;
				break;
			}
		}
	}
}
//生成前b个素数
int main(){
	int a,b,sum=0;
	scanf("%d %d", &a, &b);
	int sushuzu[max(a,b)];
	produce(max(a,b),sushuzu);
	for (int i=min(a,b)-1;i<max(a,b);i++){
		sum+=sushuzu[i];
	}
	printf("%d", sum);
	return 0;
}

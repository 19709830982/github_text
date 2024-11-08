#include <stdio.h>
#include <cmath>
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
void produce(int N,int sushuzu[]){
	int i=2;
	for (int j=0;;j++){
		for (;i<=N;i++){
			if (judgesushu(i)){
				sushuzu[j]=i;
				i+=1;
				break;
			}	
		}
		if (i==N+1){
				break;
			}
	}
}
int main(){
	int N,sum=0;
	scanf("%d", &N);
	if (N>1 && N<=100000) {	
		int sushuzu[N]={0};
		produce(N,sushuzu);
		for (int i=0;i<N;i++){
			sum+=sushuzu[i];
		}
			printf("%d", sum);
	}
	else{
		printf("0");
	}	return 0;
}

#include<stdio.h>
    int sushu(int r){
	for(int i=2;i<r;i++){
		if(r%i!=0){
			continue;
		}else return 0;
	}return r;	
	}
	int main(){
		int p,d=2,sum=0;
		scanf("%d",&p);
		for(int i=p,e=0;i<=p+10;d++){
			if(sushu(d)!=0){
				e++;
			}
				if(sushu(d)!=0&&e>=p){
						i++;
						sum+=d;
						}
		}printf("%d",sum);
		return 0;
	}
	
	
	
	

#include <stdio.h>
int main(){
	int a[3],i,temp;
	for (i=0;i<3;i++){
		scanf("%d", &a[i]);
	}
	for (i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp; 
			}
		}
	}
	if (a[0]+a[1]>a[2] ){
		if (a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
			printf("%d", a[0]*a[1]/2);
		}
		else{
			printf("其他三角形");
		}
	}
	else {
		printf("不是三角形");
	}return 0;
}

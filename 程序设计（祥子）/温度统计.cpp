#include <stdio.h>
int main(){
	int n;
	double a[10],sum=0.0,max=14,min=104;
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		scanf("%lf", &a[i]);
		a[i]=9/5.0*a[i]+32;
		printf("%.1f ", a[i]);
		if (i==4){
			printf("\n");
		}
		if (a[i]>max){
			max=a[i];
		}
		if (a[i]<min){
			min=a[i];
		}
		sum+=a[i];
	}
	printf("\n%.1f %.1f %.1f", min, max, sum/n);	
} 

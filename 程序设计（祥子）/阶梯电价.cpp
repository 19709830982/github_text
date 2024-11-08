#include<stdio.h>
int main(){
	double a,fare=0,dif=0.00;
	int rank=1;
	scanf("%lf", &a);
	if (a>400){
		fare+=(a-400);	
		rank=4;
		dif=a-400.0;
		a=400;
	}
	if (a>210){
		fare+=(a-210)*0.7;	
		if (rank<3){
			rank=3;
			dif=a-210.0;
		}
		a=210;
	}
	if (a>110){
		fare+=(a-110)*0.55;
		if (rank<2){
			rank=2;
			dif=a-110.0;
		}
		a=110;
	}
	fare+=0.5*a;	
	printf("%.2f ",fare);
	switch(rank){
		case 1:
			printf("A %.2f",dif);
			break;
		case 2:
			printf("B %.2f",dif);
			break;
		case 3:
			printf("C %.2f",dif);
			break;
		case 4:
			printf("D %.2f",dif);
			break;
	}
}

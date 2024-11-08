#include <stdio.h>
int main(){
	double S,fare;
	scanf("%lf", &S);
	if (S>10000){
		fare=0.02*S;
	}
	else if (S>5000){
		fare=0.015*S;
	}
	else if (S>3000){
		fare=0.01*S;
	}
	else{
		fare=0.005*S;
	}
	printf("%.1f", fare);
	return 0;
}

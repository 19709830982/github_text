#include <stdio.h>
#include <cmath>
int main(){
	double a,b,c,x1,x2;
	double delta;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (b*b-4*a*c>0){
		delta=sqrt((double)(b*b-4*a*c));
		x1=(delta-b)/2/a;
		x2=(-b-delta)/2/a;
		printf("%.1f %.1f", x1, x2);
	}
	else if(b*b-4*a*c==0){
		printf("%.1f",-b/2/a);
	}
	else {
		printf("no");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int R1,H1,R2,H2;
	scanf("%d%d%d%d",&R1,&H1,&R2,&H2);
	float V1,V2,G,V3;
	V1=(R1*1.0/2)*(R1*1.0/2)*3.1415926*H1;
	V2=(R2*1.0/2)*(R2*1.0/2)*3.1415926*H2/3.0;
	V3=V1-V2;
	G=0.785*V3;
	printf("%.1f %.1f",V3,G);
	return 0;
}

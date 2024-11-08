#include<stdio.h>
int main()
{
	int n,a[1000],a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	float d=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		d+=a[i];
		if(a[i]<=50&&a[i]>=0){
			a1+=1;
		}
		else if(a[i]<=100&&a[i]>=51){
					a2+=1;
				}
			else if(a[i]<=150&&a[i]>=101){
							a3+=1;
						}
			else if(a[i]<=200&&a[i]>=151){
							a4+=1;
						}
			else if(a[i]<=300&&a[i]>=201){
							a5+=1;
						}
			else if(a[i]>300){
							a6+=1;
						}	
	}
	printf("%.2f\n",d/n);
	printf("%d %d %d %d %d %d",a1,a2,a3,a4,a5,a6);
}

#include<stdio.h>
int main()
{
	int m,n;
	float h,g;
	scanf("%d%d",&m,&n);
	if(m==1){
		printf("yes ");
		if(n<=200){
			h=n*1.0;
			printf("%.1f %.1f %.1f",n*1.0,h,g=n-h);
		}
		else if(n>=200&&n<=350){
			h=n*9.0/10;
			printf("%.1f %.1f %.1f",n*1.0,h,g=n-h);
		}
		else if(n>=350&&n<=500){
			h=n*8.5/10;
			printf("%.1f %.1f %.1f",n*1.0,h,g=n-h);
			}
			else{
				h=n*8.0/10;
		    printf("%.1f %.1f %.1f",n*1.0,h,g=n-h);	
	    }
	}
	else{
		printf("no ");
		if(n<=350){
			h=n*1.0;
			printf("%.1f %.1f %.1f",n*1.0,h,g=n-h);
		}
		else if(n>=350&&n<=500){
			h=n*9.5/10;
					printf("%.1f %.1f %.1f",n*1.0,h,g=n-h);
		}
		else{
			h=n*9.0/10;
				    printf("%.1f %.1f %.1f",n*1.0,h,g=n-h);	
			    }
	}
	return 0;
}

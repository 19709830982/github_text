#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=c%10;
	printf("%d ",d);
	if(a>=6||b<=200){
		printf("no");
	}
	else if(b>=200&&b<=400){
	if(a==1&&(d==1||d==6)){
		printf("yes");
		}
	else if(a==2&&(d==2||d==7)){
		printf("yes");
		}
	else if(a==3&&(d==3||d==8)){
		printf("yes");
		}
	else if(a==4&&(d==4||d==9)){
		printf("yes");
		}
	else if(a==5&&(d==5||d==0)){
		printf("yes");
		}
		else {
				printf("no");
			}
	}
	else if(b>=400){
		if((a==1||a==3||a==5)&&(d==1||d==3||d==5||d==7||d==9)){
			printf("yes");
		}
	    else if((a==2||a==4)&&(d==0||d==2||d==4||d==6||d==8)){
				printf("yes");
			}	
			else {
					printf("no");
				}
	}
	else{printf("no");}
	return 0;
}

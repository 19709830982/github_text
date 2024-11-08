#include <stdio.h>
int main(){
	int year, month, day, h, min, s, tokenm=0;
	scanf("%d", &year);
	scanf("%d", &month);
	scanf("%d", &day);
	scanf("%d", &h);
	scanf("%d", &min);
	scanf("%d", &s);
	s+=1;
	if (s==60){
		min+=1;
		s=0;
		if (min==60){
			h+=1;
			min=0;
			if (h==24){
				day+=1;
				h=0;
				if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
					tokenm=1;
				}
				else if(month==2){
					if (year%4!=0 ||( year%100==0 && year%400!=0)){
						tokenm=2;
					}
					else {
						tokenm=3;
					}
				}
				else{
					tokenm=4;
				}
				if (tokenm==2 && day==29){
					month+=1;
					day=1;
				}
				else if (tokenm==3 && day==30){
					month+=1;
					day=1;
				}
				else if (tokenm==4 && day==31){
					month+=1;
					day=1;
				}
				else if (tokenm==1 && day==32){
					month+=1;
					day=1;
				}
				if (month==13){
					year+=1;
					month=1;
				}
			}
		}
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n", year, month, day, h, min, s);
	return 0;
}

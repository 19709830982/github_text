#include<stdio.h>
int main(){
 int y,d;
 scanf("%d",&y);
 scanf("%d",&d);
 int a[]={31,29,31,30,31,30,31,31,30,31,30,31};
 int b[]={31,28,31,30,31,30,31,31,30,31,30,31}; 
 if((y%4==0 and y%100!=0)or y%400==0){
  for(int i=0;i<12;i++){
   if(d>a[i]){d=d-a[i];
   }
   else{
    printf("%d %d",i+1,d);
    break;
   }
  }
  
  }
 else{
  for (int i=0;i<12;i++){
   if(d>b[i]){
    d=d-b[i];
   }
   else{
    printf("%d %d",i+1,d);
    break;
   }
  }
  return 0;
 } 
 
}


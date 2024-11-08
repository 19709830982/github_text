#include<stdio.h>
#include<math.h>
int main(){
 int n,s,juedingzhi,f=0,qian;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
  scanf("%d",&s);
  if(i==0){
   qian=s;
  } 
  juedingzhi=abs(s-qian);
  if(juedingzhi<f){
   juedingzhi=f;
  }
  
  f=juedingzhi;
  qian=s;
  
 }
 printf("%d",juedingzhi);
 return 0;
 
}  

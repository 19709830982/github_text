#include<stdio.h>
int main(){
 int n,t;
 double aver=0.0;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
  scanf("%d",&t);
  aver=aver+t*1.0/n;
 }
 printf("%.2lf",aver);
 return 0;
}

#include<stdio.h>
int main(){
 int a[1000],n,sum=0;
 for(int i=0;i<1000;i++){
  scanf("%d",&a[i]);
  if(a[i]==0){
   n=i;
   break;
  }
 }
 for(int i=0;i<=n;i++){
  sum=sum+a[i];
 }
 int c=0;
 for(int i=0;i<n;i++){
  if(a[i]==2 and a[i+1]==2){
   c=c+1;
   sum=sum+c*2;
  }
  else {
   c=0;
  }
 }
 printf("%d",sum);
 return 0;
}

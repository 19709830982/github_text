#include<stdio.h>
int main(){
 int n,a[100],sum=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 for(int i=1;i<n-1;i++){
  if((a[i]-a[i-1])*(a[i]-a[i+1])>0){
   sum=sum+1;
  }
  
 }
 printf("%d",sum);
 return 0;
}


#include<stdio.h>
int main(){
 int n=4,a[4],t;
 for(int p=0;p<n;p++){
  scanf("%d",&a[p]);
 }
 int i,j,k;
 for(i=0;i<n-1;i++){
  for(j=i+1,k=i;j<n;j++){
   if(a[j]<a[k]){
    k=j;
   }
   
  }
  if(k!=i){
  t=a[i];
  a[i]=a[k];
  a[k]=t; 
  }
  
 }
 for(int b=0;b<n;b++){
  printf("%d ",a[b]);
 }
 return 0;
}

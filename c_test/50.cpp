#include<stdio.h>
int sum(int a){
 int f=0;
 for(int i=1;a!=0;i++){
  f=f+a%10;
  a=a/10;
 }
 return f;
}
int main(){
 int max,n,b[100],t,num;
 scanf("%d",&n);
 int a[100];
 for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
  b[i]=sum(a[i]);
  
 }
 max=b[0];
 int c=0;
 for(int i=0;i<n;i++){
  if(b[i]>max){
   max=b[i];
   c=i;
  }
 }
 int q=0,h=a[c];
 for (int i=0;i<n;i++){
  if(b[i]==max ){
   q=1;
    if(h<=a[i]){
    h=a[i];
   }
   
   }
  
 }
 if(q==0){
  printf("%d",max);
 }
 else if(q==1){
  printf("%d",h);
 }
 return 0;
}

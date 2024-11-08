#include<stdio.h>
int main(){
 int n=4,max,s[4];
 for(int i=0;i<n;i++){
  scanf("%d",&s[i]);
  
 }
 max=s[1];
 for(int i=0;i<n;i++){
  if (s[i]>max){
   max=s[i];
  }
 }
 printf("%d",max);
 return 0;
}

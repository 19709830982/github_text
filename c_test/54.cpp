#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 for(  int i=1;i<=9;i++){
  for(  int k=0;k<=9;k++){
   for(  int j=1;j<=9;j++){
    if(i*100+k*10+j+j*100+k*10+i==n ){
     printf("%d %d %d\n",i,k,j);
    }
    
   }
  }
 }
 return 0;
} 

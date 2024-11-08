#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 if(n==1){
  printf("1");
 }
 else{ for(int i=0 ;i<=(n/2);i++){
  if(i*i==n){
   printf("%d",i);
   break;
  }
  else{
   if(i==(n/2)-1){
   printf("no");
   break;
   }
   
   continue;
   
  }
 }
 }

 return 0;
}


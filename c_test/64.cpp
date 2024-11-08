#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 for(int i=1;;i=i+2){
  if(n*n*n==(i+i+(n-1)*2)*n/2){
   for (int j=0;j<2*n;j=j+2){
    printf("%d ",i+j);
   }
   break;
  }
 }
 return 0;
}

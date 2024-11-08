#include<stdio.h>
int main(){
 int m,n;
 scanf("%d %d",&m,&n);
 if(m>=n){
  printf("%d %d",m%10,n*n);
 }
 else{printf("%d %d",n%10,m*m);
 }
 return 0;
}


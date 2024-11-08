#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 if(n>=90){
  printf("A");
 }
 else if(n>=80 and n<=89){
  printf("B");
 }
 else if(n>=70 and n<=79){
  printf("C");
 } 
 else if(n>=60 and n<=69){
  printf("D");
 }
 else{
  printf("E");
 }
 return 0;
} 

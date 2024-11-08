#include<stdio.h>
int main(){
 char a;
 scanf("%c",&a);
 if(a>=65 and a<=90){
  printf("%c",a+32);
 }
 else if(a>=91 and a<=122){
  printf("%c",a-32);
 }
 else{
  printf("%c",a);
 }
 return 0;
}


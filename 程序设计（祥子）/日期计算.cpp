#include <stdio.h>

int main() 
{
    int y=0,d=0,i=0,t=1;
    scanf("%d%d",&y,&d); 
    int num[12]={31,0,31,30,31,30,31,31,30,31,30,31};
    
    if((y%4==0 && y%100!=0) || (y%400==0)) 
    {
        num[1]=29;
    }
    else 
    {
        num[1]=28;
    }
    
    t=d-num[0];
    while(t>0)
    {
        d -= num[i];
        i++;
        t = d-num[i];
    }
        
    printf("%d %d",i+1,d);
    return 0;
}

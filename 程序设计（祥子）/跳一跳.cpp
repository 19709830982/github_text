#include<stdio.h>
int main()
{
    int a,i=0,sum=0;
    scanf("%d",&a);
    while(a!=0)
    {
        if(a==1)
        {
        sum=sum+1;i=0;
        }
        else if(a==2)
        {
            i++;
         sum=sum+i*2;    
        }
        scanf("%d",&a);
    }
    printf("%d",sum);
    return 0;
}

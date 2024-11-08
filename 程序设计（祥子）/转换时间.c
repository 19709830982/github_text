#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/86400;
    c=a%86400/3600;
    d=a%3600/60;
    e=a%60;
    printf("%d %d %d %d",b,c,d,e);
    return 0;
}

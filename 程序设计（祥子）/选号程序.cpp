#include<stdio.h>
int main(){
    int count,max,b[100],i=0,j=0,k=0;
    long a[100],n,x;
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        scanf("%ld",&a[i]);
    }
    for ( j = 0; j < count; j++)
    {
        n=a[j];
        b[j]=0;
        while (n>0)
        {
            b[j]=b[j]+n%10;
            n=n/10;
        }
    }
    max=b[0];
    x=a[0];
    for ( k = 1; k < count; k++)
    {
        if (max<b[k])
        {
            max=b[k];
            x=a[k];
        }else if (max==b[k])
        {
            if (x<a[k])
            {
                x=a[k];
            }
        }
    }
    printf("%ld",x);
    return 0;
}

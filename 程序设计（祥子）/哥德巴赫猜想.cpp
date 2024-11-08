#include<stdio.h>
int prime(int i){
    int j,ret=0;
    if(i!=2){
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                ret=1;
            }
        }
    }
    return ret;
}
 
int main(){
    int n,i;
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (prime(i)==0&&prime(n-i)==0)
        {
            printf("%d %d",i,n-i);
            break;
        }
    }
    return 0;
}

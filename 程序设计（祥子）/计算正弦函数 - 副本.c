#include<stdio.h>
#include<math.h>
//阶乘
int jiecheng(int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
//正弦
double sin1(double x ,int n)
{
    double result=0;
    for(int i=1;i<=n;i++)
    {
        result+=pow(-1,i-1)*pow(x,2*i-1)/jiecheng(2*i-1);
    }
    return result;
}
int main()
{
    int n;
    double x;
    scanf("%d %lf",&n,&x);
    printf("%.4lf",sin1(x,n));
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int days = 0;
    int day[100];
    int pm[10] = {0};
    int count = 0;
    
    scanf("%d",&days);
    for (int i = 0; i < days; i++)
    {
        scanf("%d",&day[i]);
        count += day[i];
        if (day[i] >= 0 && day[i]<= 50)
        {
            pm[0] += 1;
        }
         else if (day[i] >= 51 && day[i] <= 100)
        {
            pm[1] += 1;

        }
        else if (day[i] >= 101 && day[i] <= 150)
        {
            pm[2] += 1;
        }
        else if (day[i] >= 151 && day[i] <= 200)
        {
            pm[3] += 1;
        }
        else if (day[i] >= 201 && day[i] <= 300)
        {
            pm[4] += 1;
        }
        else if (day[i] >= 300 )
        {
            pm[5] += 1;
        }
    }
    printf("%.2lf\n%d %d %d %d %d %d\n",(double)count/days,pm[0],pm[1], pm[2], pm[3], pm[4], pm[5]);
    
    return 0;
}